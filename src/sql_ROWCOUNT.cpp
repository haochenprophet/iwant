#include "sql_ROWCOUNT.h"
int Csql_ROWCOUNT::my_init(void *p)
{
	this->name = "Csql_ROWCOUNT";
	this->alias = "sql_ROWCOUNT";
	return 0;
}

Csql_ROWCOUNT::Csql_ROWCOUNT()
{
	this->my_init();
}
