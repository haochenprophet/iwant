#include "sql_AND.h"
int Csql_AND::my_init(void *p)
{
	this->name = "Csql_AND";
	this->alias = "sql_AND";
	return 0;
}

Csql_AND::Csql_AND()
{
	this->my_init();
}
