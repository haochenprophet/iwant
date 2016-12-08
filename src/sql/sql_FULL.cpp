#include "sql_FULL.h"
int Csql_FULL::my_init(void *p)
{
	this->name = "Csql_FULL";
	this->alias = "sql_FULL";
	return 0;
}

Csql_FULL::Csql_FULL()
{
	this->my_init();
}
