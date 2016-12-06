#include "sql_DATABASE.h"
int Csql_DATABASE::my_init(void *p)
{
	this->name = "Csql_DATABASE";
	this->alias = "sql_DATABASE";
	return 0;
}

Csql_DATABASE::Csql_DATABASE()
{
	this->my_init();
}
