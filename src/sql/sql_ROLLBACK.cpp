#include "sql_ROLLBACK.h"
int Csql_ROLLBACK::my_init(void *p)
{
	this->name = "Csql_ROLLBACK";
	this->alias = "sql_ROLLBACK";
	return 0;
}

Csql_ROLLBACK::Csql_ROLLBACK()
{
	this->my_init();
}
