#include "sql_BETWEEN.h"
int Csql_BETWEEN::my_init(void *p)
{
	this->name = "Csql_BETWEEN";
	this->alias = "sql_BETWEEN";
	return 0;
}

Csql_BETWEEN::Csql_BETWEEN()
{
	this->my_init();
}
