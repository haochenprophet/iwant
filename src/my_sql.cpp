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
	this->use_db = nullptr;//default init to null
	if(use_db) this->use_db = use_db;
	if (!this->use_db&&this->db_name) this->use_db = this->db_name; //when use_db is null set it to db_name .
	this->sql = sql;
	return 0;
}

Cmy_sql::Cmy_sql()
{
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

int Cmy_sql::execute(void *p1,void *p2,void *p3)
{
	MYSQL_ROW row=(MYSQL_ROW)p1;
	unsigned int * num_fields=(unsigned int *)p2;
    unsigned long *lengths=(unsigned long *)p3;

    if(!row||!num_fields||!lengths) return -1;
    
	for(int i = 0; i < (int)*num_fields; i++)
	{
		printf("[%.*s] ", (int) lengths[i],row[i] ? row[i] : "NULL");
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
			this->execute((void *)row,(void *)&num_fields,(void *)lengths);
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

int Cmy_sql::func(void *p)
{
	Cmy_sql *m=(Cmy_sql*) p;
	std::cout<<"Cmy_sql::func\nrow_count="<<m->result->row_count<<"\nfield_count="<<m->result->field_count<<"\ncurrent_field="<<m->result->current_field<<endl;
	//this->get(this->fields,true);
	return 0;
}

int Cmy_sql::execute(Object *o)
{
	if(this->is_error()) return -1;

	do {
		this->result = mysql_store_result(this->mysql);	// did current statement return data? 
		if(this->result)
		{
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

int Cmy_sql::create_db(char * db_name)
{
	if (!db_name) return -1;
	sprintf(this->sql_buf, CREATE_DB, db_name);
	if (this->silent == 0) printf("%s\n", this->sql_buf);
	return 	this->execute(this->sql_buf);
}

int Cmy_sql::do_action(void * a)
{
	if (this->action == (ACTION_T)MySqlAtcion::create_db) this->create_db(this->db_name);
	if (this->action == (ACTION_T)MySqlAtcion::drop_db) this->drop_db(this->db_name);
	return 0;
}

int Cmy_sql::deal_cmd(int argc, char *argv[])
{
	//check user input
	if (argc < 5)
	{
		std::cout << "Cmy_sql request cmd line input: [1]action [2]password [3]use_db_name [4]tab_name | db_name \n";
		this->action_help(my_sql_action, (int)MY_SQL_ACTION_COUNT);
		return -1;
	}
	this->argc = argc;//store user input parameter
	this->argv = argv;
	//get cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;
	//get action
	this->action = this->get_action(my_sql_action, (int)MY_SQL_ACTION_COUNT, argv[1]);
	if (this->action == 0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;

	//init mysql db
	this->tab_name = (char *)argv[4];
	this->db_name = (char *)argv[4];
	this->use_db = (char *)argv[3];
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