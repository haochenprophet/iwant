#include "sql_LOAD.h"
int Csql_LOAD::my_init(void *p)
{
	this->name = "Csql_LOAD";
	this->alias = "sql_LOAD";
	return 0;
}

Csql_LOAD::Csql_LOAD()
{
	this->my_init();
}
