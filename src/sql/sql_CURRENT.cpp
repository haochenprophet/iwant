#include "sql_CURRENT.h"
int Csql_CURRENT::my_init(void *p)
{
	this->name = "Csql_CURRENT";
	this->alias = "sql_CURRENT";
	return 0;
}

Csql_CURRENT::Csql_CURRENT()
{
	this->my_init();
}
