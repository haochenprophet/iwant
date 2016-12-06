#include "sql_DBCC.h"
int Csql_DBCC::my_init(void *p)
{
	this->name = "Csql_DBCC";
	this->alias = "sql_DBCC";
	return 0;
}

Csql_DBCC::Csql_DBCC()
{
	this->my_init();
}
