#include "sql_UNIQUE.h"
int Csql_UNIQUE::my_init(void *p)
{
	this->name = "Csql_UNIQUE";
	this->alias = "sql_UNIQUE";
	return 0;
}

Csql_UNIQUE::Csql_UNIQUE()
{
	this->my_init();
}
