#include "sql_TRAN.h"
int Csql_TRAN::my_init(void *p)
{
	this->name = "Csql_TRAN";
	this->alias = "sql_TRAN";
	return 0;
}

Csql_TRAN::Csql_TRAN()
{
	this->my_init();
}
