#include "sql_OPENDATASOURCE.h"
int Csql_OPENDATASOURCE::my_init(void *p)
{
	this->name = "Csql_OPENDATASOURCE";
	this->alias = "sql_OPENDATASOURCE";
	return 0;
}

Csql_OPENDATASOURCE::Csql_OPENDATASOURCE()
{
	this->my_init();
}
