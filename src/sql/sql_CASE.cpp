#include "sql_CASE.h"
int Csql_CASE::my_init(void *p)
{
	this->name = "Csql_CASE";
	this->alias = "sql_CASE";
	return 0;
}

Csql_CASE::Csql_CASE()
{
	this->my_init();
}
