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
		sprintf(this->my_sql->sql_buf, "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';", this->my_sql->db_name, this->my_sql->tab_name, this->count, id);
		printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
		this->my_sql->sql_opetate = SqlOperate::update;
	}
	return 0;
}

int Cstock_db::add_ma_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;

	this->row = (MYSQL_ROW)p1;
	//this->num_fields = (unsigned int *)p2;
	//this->lengths = (unsigned long *)p3;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 
	
	sprintf(this->my_sql->sql_buf, "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;", this->my_sql->db_name, this->row[0]);
	printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute(this->my_sql->sql_buf);
	this->my_sql->sql_opetate = SqlOperate::alter;

	return 0;
}

int Cstock_db::calculate_ma_second(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	if (!this->my_sql) return -1;
	this->row = (MYSQL_ROW)p1;
	if (!this->row || !p2 || !p3) return -1;
	//printf("[%d] ID=%s\n", this->count++, row[0]);//test os 

	sprintf(this->my_sql->sql_buf, "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND volume >0 AND ma=0;", this->my_sql->db_name, this->row[0]);
	printf("%s\n", this->my_sql->sql_buf);
	this->my_sql->execute((char *)"SET SQL_SAFE_UPDATES = 0;");
	this->my_sql->execute(this->my_sql->sql_buf);

	this->my_sql->sql_opetate = SqlOperate::update;
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
}

int Cstock_db::execute(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test 
	//this->print_all_data((MYSQL_ROW)p1, (unsigned int *)p2, (unsigned long *)p3);//test
	if (this->action&(ACTION_T)StockAtcion::verify_id) this->verify_id_second(p1, p2, p3);
	if (this->action&(ACTION_T)StockAtcion::add_ma) this->add_ma_second(p1, p2, p3);
	if (this->action&(ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_second(p1, p2, p3);
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
		sprintf(this->my_sql->sql_buf, "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;", this->my_sql->db_name, this->my_sql->tab_name, this->count + 1);
		printf("%s\n", this->my_sql->sql_buf);
		this->my_sql->execute(this->my_sql->sql_buf);
	}
	return 0;
}

int Cstock_db::add_ma_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)

	return 0;
}

int Cstock_db::calculate_ma_first(void *p)
{
	this->pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr, (Object *)this);//->execute(void *p1, void *p2, void *p3)
	return 0;
}

int Cstock_db::func(void *p)// callback function
{
	//OUT_LINE //test 
	if (this->action&(ACTION_T)StockAtcion::verify_id) this->verify_id_first(p);
	if (this->action&(ACTION_T)StockAtcion::add_ma) this->add_ma_first(p);
	if (this->action&(ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_first(p);
	return 0;
}

int Cstock_db::verify_id_cmd(int argc, char *argv[])//verify_id action cmdd call back func.
{
	sprintf(this->my_sql->sql_buf, "SELECT idprice FROM `%s`.`%s` ;", this->my_sql->db_name, this->my_sql->tab_name);
	return 	this->my_sql->execute(this->my_sql->sql_buf, this);//!->func
}

int Cstock_db::add_ma_cmd(int argc, char *argv[])
{
	return  this->my_sql->execute((char *)"SELECT ID FROM stock.ID;", this);//magical 'this'  point !
}

//BEGIN; SET SQL_SAFE_UPDATES = 0; UPDATE stock.sh000001 SET ma = turnover / volume; SET SQL_SAFE_UPDATES = 1; COMMIT;
int Cstock_db::calculate_ma_cmd(int argc, char *argv[])
{
	this->my_sql->execute((char *)"SET SQL_SAFE_UPDATES = 0;");
	this->my_sql->execute((char *)"SELECT ID FROM stock.ID;", this);//magical 'this'  point !
	this->my_sql->execute((char *)"SET SQL_SAFE_UPDATES = 1;");
	return 0;
}

int Cstock_db::deal_cmd(int argc, char *argv[])
{
	//OUT_LINE //test 
	//check user input
	if (argc < 5)
	{
		cout << "Cstock_db request cmd line input: [1]action [2]password [3]db_name [4]tab_name\n";
		return -1;
	}

	//get action 
	this->action = atoll(argv[1]);
	if (this->action == 0) return -1;
	
	//init mysql db
	Cmy_sql m((char *)argv[2]);//Cmy_sql m((char *)"password");
	this->my_sql = &m; //set mysql database to db
	this->my_sql->db_name = (char *)argv[3];
	this->my_sql->tab_name = (char *)argv[4];
	
	//parse and run action
	if (this->action&(ACTION_T)StockAtcion::verify_id) this->verify_id_cmd(argc, argv);
	if (this->action&(ACTION_T)StockAtcion::add_ma) this->add_ma_cmd(argc, argv);
	if (this->action&(ACTION_T)StockAtcion::calculate_ma) this->calculate_ma_cmd(argc, argv);
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
