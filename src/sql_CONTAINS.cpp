#include "sql_CONTAINS.h"
int Csql_CONTAINS::my_init(void *p)
{
	this->name = "Csql_CONTAINS";
	this->alias = "sql_CONTAINS";
	return 0;
}

Csql_CONTAINS::Csql_CONTAINS()
{
	this->my_init();
}
