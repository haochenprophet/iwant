#include "sql_DENY.h"
int Csql_DENY::my_init(void *p)
{
	this->name = "Csql_DENY";
	this->alias = "sql_DENY";
	return 0;
}

Csql_DENY::Csql_DENY()
{
	this->my_init();
}
