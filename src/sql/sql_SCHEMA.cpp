#include "sql_SCHEMA.h"
int Csql_SCHEMA::my_init(void *p)
{
	this->name = "Csql_SCHEMA";
	this->alias = "sql_SCHEMA";
	return 0;
}

Csql_SCHEMA::Csql_SCHEMA()
{
	this->my_init();
}
