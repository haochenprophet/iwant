#include "sql_DISTINCT.h"
int Csql_DISTINCT::my_init(void *p)
{
	this->name = "Csql_DISTINCT";
	this->alias = "sql_DISTINCT";
	return 0;
}

Csql_DISTINCT::Csql_DISTINCT()
{
	this->my_init();
}
