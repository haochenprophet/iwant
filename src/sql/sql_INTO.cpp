#include "sql_INTO.h"
int Csql_INTO::my_init(void *p)
{
	this->name = "Csql_INTO";
	this->alias = "sql_INTO";
	return 0;
}

Csql_INTO::Csql_INTO()
{
	this->my_init();
}
