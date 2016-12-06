#include "sql_BULK.h"
int Csql_BULK::my_init(void *p)
{
	this->name = "Csql_BULK";
	this->alias = "sql_BULK";
	return 0;
}

Csql_BULK::Csql_BULK()
{
	this->my_init();
}
