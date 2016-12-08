#include "sql_ELSE.h"
int Csql_ELSE::my_init(void *p)
{
	this->name = "Csql_ELSE";
	this->alias = "sql_ELSE";
	return 0;
}

Csql_ELSE::Csql_ELSE()
{
	this->my_init();
}
