#include "sql_DELETE.h"
int Csql_DELETE::my_init(void *p)
{
	this->name = "Csql_DELETE";
	this->alias = "sql_DELETE";
	return 0;
}

Csql_DELETE::Csql_DELETE()
{
	this->my_init();
}
