#include "stock_db.h"
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
	printf("[%d]%s\n", this->count, this->row[0]);

	int id = atoi(this->row[0]);
	if (this->my_sql&&this->count != id)
	{
		sprintf(this->my_sql->sql_buf, UPDATE_IDPEICE, this->my_sql->db_name, this->my_sql->tab_name, this->count, id);
		printf("%s\n", this->my_sql->sql_buf);
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
		printf("%s\n", this->my_sql->sql_buf);
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
	printf("%s\n", this->my_sql->sql_buf);
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

	sprintf(this->my_sql->sql_buf,UPDATE_MA, this->my_sql->db_name, this->row[0]);
	printf("%s\n", this->my_sql->sql_buf);
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
	this->my_sql->execute((char *)SELECT_STOCK_ID, this);//magical 'this'  point !
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
	printf("%s\n", this->my_sql->sql_buf);
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
	printf("%s %s %s %s %s\n",this->argv[5],this->argv[6],this->argv[2],this->my_sql->db_name, this->row[0]);  //[0].exe [1]action [2]password [3]db_name [4]tab_name
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
	if (this->argc < 7)
	{
		cout << "Cstock_db request cmd line input: [1]action [2]password [3]db_name [4]tab_name [5]program [6]action \n";
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
	printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->query(this->my_sql->sql_buf);
	this->result = mysql_store_result(this->my_sql->mysql);	// did current statement return data? 
	if (!this->result) return 1;
	//cout << (char*) *this->result->data->data->data<< endl; //fuck this->result so much data !!!
	this->my_sql->sql_opetate = SqlOperate::select;

	sprintf(this->my_sql->sql_buf, UPDATE_AVG, this->my_sql->db_name, this->my_sql->tab_name, *this->result->data->data->data, this->row[0]);
	printf("%s\n", this->my_sql->sql_buf);
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
	printf("%s\n", this->my_sql->sql_buf);
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
//action
int Cstock_db::display(ActionInfo * a)
{
	do {
		if (a->step == 0 && a->action == nullptr) break;
		cout << a->step << ":" << (char *)a->action << endl;
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
	return 0;
}

int Cstock_db::func(void *p)// callback function
{
	//OUT_LINE //test 
	if (this->action == (ACTION_T)StockAtcion::verify_id) this->verify_id_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_ma) this->add_ma_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_avg) this->add_avg_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_first(p);
	if (this->action == (ACTION_T)StockAtcion::build_batch) this->build_batch_first(p);
	if (this->action == (ACTION_T)StockAtcion::calculate_avg) this->calculate_avg_first(p);
	if (this->action == (ACTION_T)StockAtcion::add_rd) this->add_rd_first(p);
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
	//this->action_cmd(argc, argv);//use the stock_db_action table .
	return 0;
}

int Cstock_db::deal_cmd(int argc, char *argv[])
{
	//OUT_LINE //test 
	//check user input
	if (argc < 5)
	{
		cout << "Cstock_db request cmd line input: [1]action [2]password [3]db_name [4]tab_name \n";
		return -1;
	}
	this->argc = argc;//store user input parameter
	this->argv = argv;
	//get action 
	this->action = atoll(argv[1]);
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
	return 	s.deal_cmd(argc, argv);
}
#endif 
