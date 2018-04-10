#include "stock_db.h"
int Cstock_db::my_init(void *p)
{
	this->name = "Cstock_db";
	this->alias = "stock_db";
	this->my_sql = nullptr;
	this->db_name = nullptr;
	this->tab_name = nullptr;
	return 0;
}

Cstock_db::Cstock_db()
{
	this->my_init();
	this->sql_buf_len = this->allot(PAGE_4K, (void **)&this->sql_buf);
}

Cstock_db::~Cstock_db()
{
	this->delete_allot((void **)&this->sql_buf);
}

int Cstock_db::execute(void *p1, void *p2, void *p3)
{
	//OUT_LINE //test ok
	MYSQL_ROW row = (MYSQL_ROW)p1;
	unsigned int * num_fields = (unsigned int *)p2;
	unsigned long *lengths = (unsigned long *)p3;

	if (!row || !num_fields || !lengths) return -1;
	this->count++;
	printf("[%d]%s\n", this->count, row[0]);

	int id = atoi(row[0]);
	if (this->my_sql&&this->count != id)
	{
		sprintf(this->sql_buf, "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';",this->db_name,this->tab_name, this->count, id);
		printf("%s\n", this->sql_buf);
		this->my_sql->execute(this->sql_buf);
		this->my_sql->sql_opetate = SqlOperate::update;
	}
	/*
	for (int i = 0; i < (int)*num_fields; i++)
	{
		printf("[%.*s] ", (int)lengths[i], row[i] ? row[i] : "NULL");
	}
	printf("\n");
	*/

	return 0;
}

int Cstock_db::func(void *p)// callback function
{
	//OUT_LINE //test ok
	this->count = 0;
	Cmy_sql * pm = (Cmy_sql *)p;
	this->my_sql->sql_opetate = SqlOperate::nothing;
	pm->get((void *)nullptr,(Object *)this);

	if (this->my_sql->sql_opetate!= SqlOperate::nothing)
	{
		sprintf(this->sql_buf, "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;", this->db_name, this->tab_name, this->count + 1);
		printf("%s\n", this->sql_buf);
		this->my_sql->execute(this->sql_buf);
	}
	//OUT_LINE //test ok
	return 0;
}

#ifndef STOCK_DB_TEST
#define STOCK_DB_TEST 0//1
#endif

#if STOCK_DB_TEST
#include "all_h_include.h"

int main(int argc, const char* argv[])
{
	int ret = 0;
    char password[100];//program language 
    cout<<"Enter mysql_db server root password :"; 
    std::cin>>password;

	Cmy_sql m((char *)password);//Cmy_sql m((char *)"password");
	Cstock_db db;

	db.my_sql = &m; //set mysql database to db
	db.db_name = (char *)"stock";
	db.tab_name = (char *)"sh000003";
	sprintf(db.sql_buf, "SELECT idprice FROM `%s`.`%s` ;", db.db_name, db.tab_name);
	ret=m.execute(db.sql_buf,&db);
	return 	ret;
}
#endif 
