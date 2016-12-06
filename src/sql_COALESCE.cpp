#include "sql_COALESCE.h"
int Csql_COALESCE::my_init(void *p)
{
	this->name = "Csql_COALESCE";
	this->alias = "sql_COALESCE";
	return 0;
}

Csql_COALESCE::Csql_COALESCE()
{
	this->my_init();
}
