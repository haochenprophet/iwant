#include "my_sql.h"
#include "my_sql_action.i" //action_tab

int Cmy_sql::my_init(void *p)
{
	this->name = "Cmy_sql";
	this->alias = "my_sql";
	this->mysql=nullptr;
	this->is_connect=false;
	this->result=nullptr;
	this->fields=nullptr;
	this->row=nullptr;
	return 0;
}

int Cmy_sql::my_init(char * password, char * user, char * host, char * use_db, char *sql)
{
	this->host = host;
	this->user = user;
	this->password = password;
	if(use_db) this->use_db = use_db;
	if (!this->use_db&&this->db_name) this->use_db = this->db_name; //when use_db is null set it to db_name .
	if(!this->sql) this->sql = sql;//Check and Not covered
	return 0;
}

Cmy_sql::Cmy_sql()
{
	this->use_db = nullptr;//default init to null
	this->my_init();
}

Cmy_sql::Cmy_sql(char * password,char * user,char * host,char * use_db,char *sql)
{
	this->my_init();
	this->my_init(password, user, host, use_db, sql);
	this->mysql = &this->mysql_i;
	if(NULL==mysql_init(this->mysql))
	{
		this->inc_error();
		this->mysql=nullptr;
	} 
}

Cmy_sql::~Cmy_sql()
{
	if(this->mysql) mysql_close(this->mysql);
}


int Cmy_sql::connect()
{
	int ret=0;
	if(this->is_connect) return 0;
	if(this->is_error()) return -1;
	if(!this->mysql) //if not init ,init 
	{
		this->mysql = &this->mysql_i;
		if (NULL == mysql_init(this->mysql))
		{
			this->inc_error();
			this->mysql = nullptr;
			return ++ret;
		}
	}
	//if (!this->mysql) OUT_ERROR_N(1)

	if(!mysql_real_connect(this->mysql,	this->host,this->user,this->password,this->use_db,0,NULL,0))
	{
		this->inc_error();
		return ++ret;
	}
	this->is_connect=true;
	return 0;
}

int Cmy_sql::query(char *sql)
{
	if(this->is_error()) return -1;
	//if (this->silent == 0) printf("Cmy_sql::query(%s)\n", sql);//test ok
	if(mysql_query(this->mysql,sql))
	{
		this->inc_error();
		return 1;
	}
	return 0;//pass
}

int Cmy_sql::query()
{
	if(!this->sql) {this->inc_error(); return -1;}
	return this->query(this->sql);
}

int Cmy_sql::get(MYSQL_RES *result,MYSQL_FIELD *fields,bool show)
{
	if(!result) return -1;

	unsigned int i,num_fields;

	num_fields = mysql_num_fields(result);
	if(num_fields<1) return 1;

	fields = mysql_fetch_fields(result);
	if(!fields) return 2;

	if(!show) return 0;

	for(i = 0; i < num_fields; i++)
	{
		printf("Field[%u]=%s\n", i, fields[i].name);
	}
	return 0;
}

int Cmy_sql::get(MYSQL_FIELD *fields,bool show)
{
	return this->get(this->result,fields,show);
}

int Cmy_sql::output(void *p1, void *p2, void *p3)
{
	MYSQL_ROW row = (MYSQL_ROW)p1;
	unsigned int * num_fields = (unsigned int *)p2;
	unsigned long *lengths = (unsigned long *)p3;

	if (!row || !num_fields || !lengths) return -1;

	for (int i = 0; i < (int)*num_fields; i++)
	{
		printf("[%.*s] ", (int)lengths[i], row[i] ? row[i] : "NULL");
	}
	printf("\n");

	return 0;
}

int Cmy_sql::get(MYSQL_RES *result,	MYSQL_ROW row,Object *o)
{
	unsigned int num_fields;
	unsigned long *lengths;

	try //can not catch the exception
	{
		num_fields = mysql_num_fields(result);
	}
	catch (...)
	{
		//AT_LINE
		return -1;
	}

	if(num_fields<1) return 1;
	while ((row = mysql_fetch_row(result)))
	{
		lengths = mysql_fetch_lengths(result);
		if(o){
			o->execute((void *)row,(void *)&num_fields,(void *)lengths); //call o->execute(void *,void *)
		}
		else
		{
			this->output((void *)row,(void *)&num_fields,(void *)lengths);
		}
	}
	return 0;
}

int Cmy_sql::get(MYSQL_RES *result,Object *o)//get row
{
	return this->get(result,this->row,o);
}

int Cmy_sql::get(void *p,Object *o)//get row
{
	return this->get(this->result,this->row,o);
}



int Cmy_sql::execute(Object *o)
{
	if(this->is_error()) return -1;
	this->execute_count = 0;
	do {
		this->result = mysql_store_result(this->mysql);	// did current statement return data? 
		if(this->result)
		{
			this->execute_count ++;
			o->execute( (void*) this); //point Cmy_sql to call back
			//mysql_free_result(this->result);
		}
	} while (!mysql_next_result(this->mysql));
	return 0;
}

int Cmy_sql::execute()
{
	return this->execute((Object *) this);
}

int Cmy_sql::execute(char * sql,Object *o)
{
	if(!sql) return 1;
	if(!this->is_connect && this->connect()) return 2;
	this->sql=sql;
	if(this->query()) return 3;
	
	if(o){
		if(this->execute(o)) return 4;
	}
	else
	{
		if(this->execute()) return 4;		
	}

	return 0;
}

int Cmy_sql::execute(string * sql, Object *o)
{
	return this->execute((char *)sql->c_str(), o);
}

int Cmy_sql::drop_db(char * db_name)
{
	if (!db_name) return -1;
	if (strcmp((char *)"sys", db_name) == 0) return -1; //do not drop sys db
	sprintf(this->sql_buf, DROP_DB, db_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::drop_tab(char * db_name, char * tab_name)
{
	if (!db_name) return -1;
	if (strcmp((char *)"sys", db_name) == 0) return -1; //do not drop sys.[tabs]
	sprintf(this->sql_buf, DROP_TAB, db_name, tab_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::create_db(char * db_name)
{
	if (!db_name) return -1;
	sprintf(this->sql_buf, CREATE_DB, db_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::create_tab(char * db_name, char * tab_name)
{
	if (!(db_name&&tab_name)) return -1;
	sprintf(this->sql_buf, (char *)CREATE_TAB, db_name, tab_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::create_tab()
{
	return this->create_tab(this->db_name, this->tab_name);
}

int Cmy_sql::create_tab_cmd(void *p)
{
	if (!(this->tab_name&&this->use_db))
	{
		std::cout << CREATE_TAB_HELP<<endl;
		return -1;
	}
	return this->create_tab(this->use_db, this->tab_name);
}
//verify_id
int Cmy_sql::verify_id_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	this->row = (MYSQL_ROW)p1;
	//this->num_fields = (unsigned int *)p2;
	//this->lengths = (unsigned long *)p3;
	if (!this->row || !p2 || !p3) return -1;
	this->count++;
	//printf("[%d]%s\n", this->count, this->row[0]);

	int id = atoi(this->row[0]);
	if (this->count != id)
	{
		sprintf(this->sql_buf,(char*) UPDATE_ID_X, this->db_name, this->tab_name, this->tab_field,this->count,this->tab_field, id);
		if (this->silent == 0) printf("%s\n", this->sql_buf);
		this->execute(this->sql_buf);
		this->sql_opetate = SqlOperate::update;
	}
	return 0;
}

int Cmy_sql::verify_id_first(void *p)
{
	this->count = 0;
	this->sql_opetate = SqlOperate::nothing;
	this->get((void *)nullptr, (Object *)this);

	if (this->sql_opetate != SqlOperate::nothing)
	{
		sprintf(this->sql_buf, ALTER_AUTO_INCREMENT, this->db_name, this->tab_name, this->count + 1);
		if (this->silent == 0) printf("%s\n", this->sql_buf);
		this->execute(this->sql_buf);
	}
	return 0;
}

int Cmy_sql::verify_id_cmd()//verify_id action cmd call back func.
{
	if (!(this->tab_field&&this->tab_name&&this->db_name))
	{
		std::cout << VERIFY_ID_HELP << endl;
		return -1;
	}
	sprintf(this->sql_buf, SELECT_ID_X, this->tab_field, this->use_db, this->tab_name);
	return 	this->execute(this->sql_buf, this);//!->func
}

//add_uuid
int Cmy_sql::update_uuid_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	this->row = (MYSQL_ROW)p1;
	//this->num_fields = (unsigned int *)p2;
	//this->lengths = (unsigned long *)p3;
	if (!this->row || !p2 || !p3) return -1;

	//int id = atoi(this->row[0]);
	this->create_uuid(this->uuid_s, (char*)UUID_FORMAT_2);

	sprintf(this->sql_buf, (char*)UPDATE_UUID, this->db_name, this->tab_name, this->uuid_s.c_str(), this->tab_field, this->row[0]);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	this->execute(this->sql_buf);
	this->sql_opetate = SqlOperate::update;
	return 0;
}

int Cmy_sql::update_uuid_first(void *p)
{
	//OUT_LINE //test ok
	this->count = 0;
	this->sql_opetate = SqlOperate::nothing;
	this->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cmy_sql::update_uuid_cmd()//add_uuid action cmd call back func.
{
	//OUT_LINE //test ok

	if (!(this->tab_field&&this->tab_name&&this->db_name))
	{
		std::cout << UPDATE_UUID_HELP << endl;
		return -1;
	}
	sprintf(this->sql_buf, (char*)SELECT_UUID, this->tab_field, this->use_db, this->tab_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf, this);//!->func
}

int Cmy_sql::add_uuid_cmd()//add_uuid action cmd call back func.
{
	//OUT_LINE //test ok

	if (!(this->tab_field&&this->tab_name&&this->db_name))
	{
		std::cout << ADD_UUID_HELP << endl;
		return -1;
	}
	sprintf(this->sql_buf, (char*)ADD_UUID_COLUMN, this->use_db, this->tab_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return this->execute(this->sql_buf);
}
//show
int Cmy_sql::show_db()
{
	sprintf(this->sql_buf, SHOW_DB);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::show_tab(char * db_name)
{
	if (!db_name) return -1;
	sprintf(this->sql_buf, SHOW_TAB, db_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::show_col(char * db_name, char * tab_name)
{
	if (!db_name||!tab_name) return -1;
	sprintf(this->sql_buf, SHOW_COL, db_name, tab_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::is_exist(char* db_name, char* tab_name,char * col_name,char *col_value)
{
	if (!(db_name && tab_name && col_name && col_value)) return -1;//check input
	sprintf(this->sql_buf, IS_EXIST, col_name, db_name, tab_name, col_name,col_value);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	this->execute_count = 0;
	this->execute(this->sql_buf);
	return 	this->execute_count;
}

int Cmy_sql::execute(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (this->action == (ACTION_T)MySqlAtcion::verify_id) this->verify_id_second(p1, p2, p3);
	if (this->action == (ACTION_T)MySqlAtcion::update_uuid) this->update_uuid_second(p1, p2, p3);

	return 0;
}

int Cmy_sql::func(void *p)// callback function
{
	//OUT_LINE //test ok
	if (this->action == (ACTION_T)MySqlAtcion::query) this->get();
	if (this->action == (ACTION_T)MySqlAtcion::verify_id) this->verify_id_first(p);
	if (this->action == (ACTION_T)MySqlAtcion::update_uuid) this->update_uuid_first(p);
	if (this->action == (ACTION_T)MySqlAtcion::show_db) this->get();
	if (this->action == (ACTION_T)MySqlAtcion::show_tab) this->get();
	if (this->action == (ACTION_T)MySqlAtcion::show_col) this->get();
	return 0;
}

int Cmy_sql::do_action(void * a)
{
	if (this->action == (ACTION_T)MySqlAtcion::create_db) this->create_db(this->db_name);
	if (this->action == (ACTION_T)MySqlAtcion::drop_db) this->drop_db(this->db_name);
	if (this->action == (ACTION_T)MySqlAtcion::drop_tab) this->drop_tab(this->db_name,this->tab_name);
	if (this->action == (ACTION_T)MySqlAtcion::query) this->execute(this->sql);
	if (this->action == (ACTION_T)MySqlAtcion::verify_id) this->verify_id_cmd();
	if (this->action == (ACTION_T)MySqlAtcion::create_tab) this->create_tab_cmd();
	if (this->action == (ACTION_T)MySqlAtcion::add_uuid) this->add_uuid_cmd();
	if (this->action == (ACTION_T)MySqlAtcion::update_uuid) this->update_uuid_cmd();
	if (this->action == (ACTION_T)MySqlAtcion::show_db) this->show_db();
	if (this->action == (ACTION_T)MySqlAtcion::show_tab) this->show_tab(this->use_db);
	if (this->action == (ACTION_T)MySqlAtcion::show_col) this->show_col(this->use_db, this->tab_name);
	if (this->action == (ACTION_T)MySqlAtcion::is_exist) this->is_exist(this->use_db, this->tab_name,this->tab_field,this->col_value);

	return 0;
}

int Cmy_sql::deal_cmd(int argc, char *argv[])
{
	//check user input
	//this->list_cmd(argc, argv);//test ok
	if (argc < 4)
	{
		std::cout << CMYSQL_MAIN_HELP<<endl;
		this->action_help(my_sql_action, (int)MY_SQL_ACTION_COUNT);
		return -1;
	}
	this->cmd.argc = argc;//store user input parameter
	this->cmd.argv = argv;
	//get cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;
	//get action
	this->action = this->get_action(my_sql_action, (int)MY_SQL_ACTION_COUNT, argv[1]);
	if (this->action == 0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;

	//init mysql db
	if (argc > 6) this->col_value = (char*)argv[6];
	if (argc > 5) this->tab_field = (char *)argv[5];
	if (argc > 4) this->tab_name = (char *)argv[4];
	if (argc > 4) this->db_name = (char *)argv[4];
	this->use_db = (char *)argv[3];
	this->sql= (char *)argv[3];
	this->my_init((char *)argv[2]);//my_init use db_name
	//do action
	this->do_action();

	return 0;
}

#ifndef MY_SQL_TEST
#define MY_SQL_TEST 0//1
#endif

#if MY_SQL_TEST
#include "all_h_include.h"

int main(int argc, char* argv[])
{
	Cmy_sql m;
	return 	m.deal_cmd(argc, argv);
}
#endif 
