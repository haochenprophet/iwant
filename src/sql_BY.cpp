#include "sql_BY.h"
int Csql_BY::my_init(void *p)
{
	this->name = "Csql_BY";
	this->alias = "sql_BY";
	return 0;
}

Csql_BY::Csql_BY()
{
	this->my_init();
}
