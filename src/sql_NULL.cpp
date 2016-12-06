#include "sql_NULL.h"
int Csql_NULL::my_init(void *p)
{
	this->name = "Csql_NULL";
	this->alias = "sql_NULL";
	return 0;
}

Csql_NULL::Csql_NULL()
{
	this->my_init();
}
