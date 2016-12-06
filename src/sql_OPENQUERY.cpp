#include "sql_OPENQUERY.h"
int Csql_OPENQUERY::my_init(void *p)
{
	this->name = "Csql_OPENQUERY";
	this->alias = "sql_OPENQUERY";
	return 0;
}

Csql_OPENQUERY::Csql_OPENQUERY()
{
	this->my_init();
}
