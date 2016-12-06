#include "sql_NOT.h"
int Csql_NOT::my_init(void *p)
{
	this->name = "Csql_NOT";
	this->alias = "sql_NOT";
	return 0;
}

Csql_NOT::Csql_NOT()
{
	this->my_init();
}
