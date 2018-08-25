#include "stock_db.h"
#include "stock_db_action.i" //action_tab

int Cstock_db::my_init(void *p)
{
	this->name = "Cstock_db";
	this->alias = "stock_db";
	return 0;
}

Cstock_db::Cstock_db()
{
	this->my_init();
	this->my_sql = nullptr;
	this->pm = nullptr;
	this->row = nullptr;
	this->num_fields = nullptr;
	this->lengths = nullptr;
	this->silent = 0;
	this->stock_id_type = 0;
}

Cstock_db::~Cstock_db()
{
}
//verify_id
int Cstock_db::verify_id_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	this->row = (MYSQL_ROW)p1;
	//this->num_fields = (unsigned int *)p2;
	//this->lengths = (unsigned long *)p3;
	if (!this->row || !p2 || !p3) return -1;
	this->count++;
	//printf("[%d]%s\n", this->count, this->row[0]);

	int id = atoi(this->row[0]);
	if (this->my_sql&&this->count != id)
	{
		sprintf(this->my_sql->sql_buf, UPDATE_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name, this->count, id);
		if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
		this->my_sql->sql_opetate = SqlOperate::update;
	}
	return 0;
}

int Cstock_db::verify_id_first(void *p)
{
	this->count = 0;
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	this->pm->get((void *)nullptr, (Object *)this);

	if (this->my_sql->sql_opetate != SqlOperate::nothing)
	{
		sprintf(this->my_sql->sql_buf, ALTER_AUTO_INCREMENT, this->my_sql->db_name, this->my_sql->tab_name, this->count + 1);
		if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
	}
	return 0;
}

int Cstock_db::verify_id_cmd()//verify_id action cmdd call back func.
{
	sprintf(this->my_sql->sql_buf,SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);//!->func
}

//add_ma
int Cstock_db::add_ma_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;

	this->row = (MYSQL_ROW)p1;
	//this->num_fields = (unsigned int *)p2;
	//this->lengths = (unsigned long *)p3;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 
	
	sprintf(this->my_sql->sql_buf,ADD_MA_COLUMN, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;

	return 0;
}

int Cstock_db::add_ma_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::add_ma_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}
//calculate_ma
int Cstock_db::calculate_ma_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 

	if (this->stock_id_type == 0) sprintf(this->my_sql->sql_buf, UPDATE_MA, this->my_sql->db_name, this->row[0]);
	if (this->stock_id_type == 1) sprintf(this->my_sql->sql_buf,UPDATE_MA_CLOSE, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->my_sql->execute(this->my_sql->sql_buf);

	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_ma_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::calculate_ma_cmd()
{
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->stock_id_type = 1;
	this->my_sql->execute((char *)SELECT_TYPE_1, this);//magical 'this'  point !
	this->stock_id_type = 0;
	this->my_sql->execute((char *)SELECT_TYPE_0, this);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_1);
	return 0;
}

int Cstock_db::print_all_data(MYSQL_ROW row, unsigned int * num_fields, unsigned long *lengths)
{
	// out all data
	for (int i = 0; i < (int)*num_fields; i++)
	{
		printf("[%.*s] ", (int)lengths[i], row[i] ? row[i] : "NULL");
	}
	printf("\n");
	return 0;
}

//add_avg
int Cstock_db::add_avg_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf,ADD_AVG_COLUMN, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;
	return 0;
}

int Cstock_db::add_avg_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::add_avg_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}

//build_sh
int Cstock_db::build_batch_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	printf("%s %s %s %s %s",this->cmd.argv[5],this->cmd.argv[6],this->cmd.argv[2],this->my_sql->db_name, this->row[0]);  //[0].exe [1]action [2]password [3]db_name [4]tab_name
	for (int i = 7; i < cmd.argc; i++) printf(" %s", cmd.argv[i]);
	printf("\n");
	return 0;
}

int Cstock_db::build_batch_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::build_batch_cmd()
{
	if (this->cmd.argc < 7)
	{
		std::cout << "Cstock_db::build_batch_cmd request cmd line input: [1]action [2]password [3]db_name [4]tab_name [5]program [6]action \n";
		return -1;
	}

	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}
//calculate_avg
int Cstock_db::calculate_avg_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf, SELECT_AVG_MA, this->my_sql->db_name, this->my_sql->tab_name,this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->result = mysql_store_result(this->my_sql->mysql);	// did current statement return data? 
	if (!this->result || !this->result->data || !this->result->data->data || !this->result->data->data->data) return -1;
	//std::cout << (char*) *this->result->data->data->data<< endl; //fuck this->result so much data !!!
	this->my_sql->sql_opetate = SqlOperate::select;

	sprintf(this->my_sql->sql_buf, UPDATE_AVG, this->my_sql->db_name, this->my_sql->tab_name, *this->result->data->data->data, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_avg_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::calculate_avg_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);//!->func
}
//add rd ,rise & drop
int Cstock_db::add_rd_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	sprintf(this->my_sql->sql_buf, ADD_RD_COLUMN, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;
	return 0;
}

int Cstock_db::add_rd_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::add_rd_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}
//calculate_rd
int Cstock_db::calculate_rd_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 

	sprintf(this->my_sql->sql_buf, UPDATE_RD, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}
int Cstock_db::calculate_rd_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}
int Cstock_db::calculate_rd_cmd()
{
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
	this->my_sql->execute((char *)SET_SAFE_UPDATES_1);
	return 0;
}
//delete_zero
int Cstock_db::delete_zero_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 

	sprintf(this->my_sql->sql_buf, DELETE_ZERO_ROW, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::delete_;
	return 0;
}
int Cstock_db::delete_zero_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}
int Cstock_db::delete_zero_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}
//add_kprice
int Cstock_db::add_kprice_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf, ADD_K_PRICE_COLUMN, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;
	return 0;
}

int Cstock_db::add_kprice_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::add_kprice_cmd()
{
	if (strcmp(this->my_sql->tab_name, (char*)"ID") != 0)
	{
		sprintf(this->my_sql->sql_buf, ADD_K_PRICE_COLUMN, this->my_sql->db_name, this->my_sql->tab_name);
		if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
		return this->my_sql->execute(this->my_sql->sql_buf);
	}
	
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
}

int Cstock_db::add_column(char * sql, char *db, char * table)
{
	sprintf(this->my_sql->sql_buf, sql, db, table);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;
	return 0;
}
//add_ma[x]
int Cstock_db::add_ma5_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA5_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma5_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma5_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_ma10_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA10_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma10_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma10_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_ma20_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA20_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma20_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma20_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_ma30_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA30_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma30_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma30_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_ma60_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA60_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma60_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma60_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_ma100_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_MA100_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_ma100_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_ma100_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}
//calculate_ma[x]
int Cstock_db::calculate_ma(int x)
{
	sprintf(this->my_sql->sql_buf, SELECT_AVG_MA_X, this->my_sql->db_name, this->my_sql->tab_name, this->row[0], this->row[0], x);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->result = mysql_store_result(this->my_sql->mysql);	// did current statement return data? 
	if (!this->result || !this->result->data || !this->result->data->data || !this->result->data->data->data) return -1;
	//std::cout << (char*) *this->result->data->data->data<< endl; //fuck this->result so much data !!!
	this->my_sql->sql_opetate = SqlOperate::select;

	sprintf(this->my_sql->sql_buf, UPDATE_MA_X, this->my_sql->db_name, this->my_sql->tab_name,x, *this->result->data->data->data, this->row[0],x);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_ma5_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(5);
}

int Cstock_db::calculate_ma5_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma5_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::calculate_ma10_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(10);
}

int Cstock_db::calculate_ma10_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma10_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::calculate_ma20_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(20);
}

int Cstock_db::calculate_ma20_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma20_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::calculate_ma30_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(30);
}

int Cstock_db::calculate_ma30_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma30_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::calculate_ma60_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(60);
}

int Cstock_db::calculate_ma60_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma60_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::calculate_ma100_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->calculate_ma(100);
}

int Cstock_db::calculate_ma100_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_ma100_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}

int Cstock_db::add_am_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_AM_COLUMN, this->my_sql->db_name, this->row[0]);
}
int Cstock_db::add_am_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}
int Cstock_db::add_am_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

//calculate_am
int Cstock_db::calculate_am_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf, UPDATE_AM, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->my_sql->execute(this->my_sql->sql_buf);

	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_am_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_am_cmd()
{
	this->my_sql->execute((char *)SELECT_STOCK_ID, this);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_1);
	return 0;
}
//calculate_kp
int Cstock_db::calculate_kp_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf, UPDATE_KP, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_kp_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_kp_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

//add_dir
int Cstock_db::add_dir_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	return this->add_column((char *)ADD_DIR_COLUMN, this->my_sql->db_name, this->row[0]);
}

int Cstock_db::add_dir_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::add_dir_cmd()
{
	return  this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::execute_add_cmd(Action * a, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (a[i].t == 0) break;
		if (a[i].action_class ==(int) StockActionClass::add)
		{
			this->add_column((char *)a[i].action, this->my_sql->db_name, this->my_sql->tab_name);
		}
	}
	return 0;
}
//calculate_dir
int Cstock_db::calculate_dir_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	for(int i=0;i<CALULATE_DIR_COUNT;i++)
	{
		if(calculate_dir[i].action==nullptr) break;
		sprintf(this->my_sql->sql_buf, (char *)calculate_dir[i].action, this->my_sql->db_name, this->my_sql->tab_name,this->row[0]);
		if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
	}

	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::calculate_dir_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::calculate_dir_cmd()
{
	sprintf(this->my_sql->sql_buf,SELECT_DIR_0, this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);//!->func
}
//clear_dir
int Cstock_db::clear_dir_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	sprintf(this->my_sql->sql_buf, UPDATE_DIR_0, this->my_sql->db_name, this->row[0]);
	if(this->silent==0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);
	this->my_sql->execute(this->my_sql->sql_buf);

	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::clear_dir_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::clear_dir_cmd()
{
	this->my_sql->execute((char *)SELECT_STOCK_ID, this);
	this->my_sql->execute((char *)SET_SAFE_UPDATES_1);
	return 0;
}

int Cstock_db::create_dir_cmd()
{
	sprintf(this->my_sql->sql_buf, CREATE_DIR_TABLE, this->my_sql->db_name);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	return 	this->my_sql->execute(this->my_sql->sql_buf);
}

int Cstock_db::insert_dir_id_cmd()
{
	sprintf(this->my_sql->sql_buf, INSERT_DIR_ID, this->my_sql->db_name, this->my_sql->db_name);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	return 	this->my_sql->execute(this->my_sql->sql_buf);
}

int Cstock_db::alert_dir_key_cmd()
{
	sprintf(this->my_sql->sql_buf, ALTER_DIR_PKEY, this->my_sql->db_name);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	return 	this->my_sql->execute(this->my_sql->sql_buf);
}

//update_dir
int Cstock_db::update_dir_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	
	//sprintf(this->my_sql->sql_buf, UPDATE_DIR_TEST,  this->my_sql->db_name, this->row[0]);
	sprintf(this->my_sql->sql_buf, UPDATE_DIR, this->my_sql->db_name, this->my_sql->db_name,this->row[0], this->row[0]);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}

int Cstock_db::update_dir_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::update_dir_cmd()
{
	sprintf(this->my_sql->sql_buf, SELECT_DIR, this->my_sql->db_name);
	//if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);
}
//insert_dir
int Cstock_db::insert_dir_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	this->s_str = this->row[0];//store to string
	const char *id = this->s_str.c_str();//point to ID

	sprintf(this->my_sql->sql_buf, SELECT_LAST_KPRICE, this->my_sql->db_name, id);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->result = mysql_store_result(this->my_sql->mysql);	// did current statement return data? 
	if (!this->result|| !this->result->data|| !this->result->data->data|| !this->result->data->data->data) return -1;

	sprintf(this->my_sql->sql_buf, INSERT_DIR, this->my_sql->db_name, id, this->my_sql->db_name, id, *this->result->data->data->data);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::insert;
	return 0;
}

int Cstock_db::insert_dir_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}

int Cstock_db::insert_dir_cmd()
{
	return	this->my_sql->execute((char *)SELECT_STOCK_ID, this);
}

int Cstock_db::add_type_cmd()
{
	sprintf(this->my_sql->sql_buf, ALTER_ADD_TYPE, this->my_sql->db_name,this->my_sql->tab_name);
	if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
	return 	this->my_sql->execute(this->my_sql->sql_buf);
}

int Cstock_db::update_type_cmd()
{
	return 	this->my_sql->execute((char *)UPDATE_TYPE_ID);
}

int Cstock_db::verify_ma_second(void *p1, void *p2, void *p3)
{
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;

	this->my_sql->execute((char *)SET_SAFE_UPDATES_0);

	for (int i = 0; i<VERIFY_MA_COUNT; i++)
	{
		if (verify_ma[i].action == nullptr) break;
		sprintf(this->my_sql->sql_buf, (char *)verify_ma[i].action, this->my_sql->db_name, this->row[0]);//row[0] table name
		if (this->silent == 0) printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
	}
	this->my_sql->execute((char *)SET_SAFE_UPDATES_1);
	this->my_sql->tab_name = this->row[0];
	this->my_sql->sql_opetate = SqlOperate::update;
	return 0;
}
int Cstock_db::verify_ma_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);
	return 0;
}
int Cstock_db::verify_ma_cmd()
{
	return 	this->my_sql->execute((char *)SELECT_TYPE_1,this);
}

int Cstock_db::execute(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test 
	//this->print_all_data((MYSQL_ROW)p1, (unsigned int *)p2, (unsigned long *)p3);//test
	if (this->action == (ACTION_T)StockAtcion::verify_id) this->verify_id_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma) this->add_ma_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_avg) this->add_avg_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::build_batch) this->build_batch_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_avg) this->calculate_avg_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_rd) this->add_rd_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_rd) this->calculate_rd_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::delete_zero) this->delete_zero_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_kprice) this->add_kprice_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma5) this->add_ma5_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma10) this->add_ma10_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma20) this->add_ma20_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma30) this->add_ma30_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma60) this->add_ma60_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_ma100) this->add_ma100_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma5) this->calculate_ma5_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma10) this->calculate_ma10_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma20) this->calculate_ma20_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma30) this->calculate_ma30_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma60) this->calculate_ma60_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma100) this->calculate_ma100_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_am) this->add_am_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_am) this->calculate_am_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_kp) this->calculate_kp_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::calculate_dir) this->calculate_dir_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::add_dir) this->add_dir_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::clear_dir) this->clear_dir_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::update_dir) this->update_dir_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::insert_dir) this->insert_dir_second(p1, p2, p3);
	if (this->action == (ACTION_T)StockAtcion::verify_ma) this->verify_ma_second(p1, p2, p3);
	return 0;
}

int Cstock_db::func(void *p)// callback function
{
	//OUT_LINE //test s
	if (this->action == (ACTION_T)StockAtcion::verify_id) this->verify_id_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma) this->add_ma_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_avg) this->add_avg_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_first(p);
	if (this->action == (ACTION_T)StockAtcion::build_batch) this->build_batch_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_avg) this->calculate_avg_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_rd) this->add_rd_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_rd) this->calculate_rd_first(p);
	if (this->action == (ACTION_T)StockAtcion::delete_zero) this->delete_zero_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_kprice) this->add_kprice_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma5) this->add_ma5_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma10) this->add_ma10_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma20) this->add_ma20_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma30) this->add_ma30_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma60) this->add_ma60_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma100) this->add_ma100_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma5) this->calculate_ma5_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma10) this->calculate_ma10_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma20) this->calculate_ma20_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma30) this->calculate_ma30_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma60) this->calculate_ma60_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma100) this->calculate_ma100_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_am) this->add_am_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_am) this->calculate_am_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_kp) this->calculate_kp_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_dir) this->calculate_dir_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_dir) this->add_dir_first(p);
	if (this->action == (ACTION_T)StockAtcion::clear_dir) this->clear_dir_first(p);
	if (this->action == (ACTION_T)StockAtcion::update_dir) this->update_dir_first(p);
	if (this->action == (ACTION_T)StockAtcion::insert_dir) this->insert_dir_first(p);
	if (this->action == (ACTION_T)StockAtcion::verify_ma) this->verify_ma_first(p);
	return 0;
}

int Cstock_db::parse_run_action()
{
	if (this->action == (ACTION_T)StockAtcion::verify_id) this->verify_id_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma) this->add_ma_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_avg) this->add_avg_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_cmd();
	if (this->action == (ACTION_T)StockAtcion::build_batch) this->build_batch_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_avg) this->calculate_avg_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_rd) this->add_rd_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_rd) this->calculate_rd_cmd();
	if (this->action == (ACTION_T)StockAtcion::delete_zero) this->delete_zero_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_kprice) this->add_kprice_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma5) this->add_ma5_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma10) this->add_ma10_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma20) this->add_ma20_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma30) this->add_ma30_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma60) this->add_ma60_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_ma100) this->add_ma100_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma5) this->calculate_ma5_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma10) this->calculate_ma10_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma20) this->calculate_ma20_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma30) this->calculate_ma30_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma60) this->calculate_ma60_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_ma100) this->calculate_ma100_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_am) this->add_am_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_am) this->calculate_am_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_kp) this->calculate_kp_cmd();
	if (this->action == (ACTION_T)StockAtcion::calculate_dir) this->calculate_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_dir) this->add_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::execute_add) this->execute_add_cmd(stock_db_action, (int)STOCK_DB_ACTION_COUNT);
	if (this->action == (ACTION_T)StockAtcion::clear_dir) this->clear_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::create_dir) this->create_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::insert_dir_id) this->insert_dir_id_cmd();
	if (this->action == (ACTION_T)StockAtcion::alert_dir_key) this->alert_dir_key_cmd();
	if (this->action == (ACTION_T)StockAtcion::update_dir) this->update_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::insert_dir) this->insert_dir_cmd();
	if (this->action == (ACTION_T)StockAtcion::add_type) this->add_type_cmd();
	if (this->action == (ACTION_T)StockAtcion::update_type) this->update_type_cmd();
	if (this->action == (ACTION_T)StockAtcion::verify_ma) this->verify_ma_cmd();
	//this->action_cmd(argc, argv);//use the stock_db_action table .
	return 0;
}

//action
int Cstock_db::display(ActionInfo * a)
{
	do {
		if (a->step == 0 && a->action == nullptr) break;
		std::cout << a->step << ":" << (char *)a->action << endl;
		a++;
	} while (1);
	return 0;
}

int Cstock_db::do_action(void * a)
{
	//OUT_LINE //test 
	this->parse_run_action();
	return 0;
}

int Cstock_db::action_cmd()
{
	//OUT_LINE //test 
	this->deal_action(stock_db_action, (int)STOCK_DB_ACTION_COUNT, nullptr);
	return 0;
}

int Cstock_db::deal_cmd(int argc, char *argv[])
{
	//OUT_LINE //test 
	//check user input
	//this->list_cmd(argc, argv);//test ok
	if (argc < 5)
	{
		std::cout << "Cstock_db request cmd line input: [1]action [2]password [3]db_name [4]tab_name \n";
		this->action_help(stock_db_action, (int)STOCK_DB_ACTION_COUNT);
		return -1;
	}
	this->cmd.argc = argc;//store user input parameter
	this->cmd.argv = argv;
	//get cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;
	//get action
	this->action = this->get_action(stock_db_action, (int)STOCK_DB_ACTION_COUNT, argv[1]);
	if(this->action==0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;
	
	//init mysql db
	Cmy_sql m((char *)argv[2]);//Cmy_sql m((char *)"password");
	this->my_sql = &m; //set mysql database to db
	this->my_sql->db_name = (char *)argv[3];
	this->my_sql->tab_name = (char *)argv[4];
	
	//parse and run action
	this->parse_run_action();
	return 0;
}

#ifndef STOCK_DB_TEST
#define STOCK_DB_TEST 0//1
#endif

#if STOCK_DB_TEST
#include "all_h_include.h"

int main(int argc, char* argv[])
{
	Cstock_db s;
	//if(s==(char*)"stock_db") AT_LINE //test object:== ok
	return 	s.deal_cmd(argc, argv);
}
#endif 
