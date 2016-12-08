#include "sql_USE.h"
int Csql_USE::my_init(void *p)
{
	this->name = "Csql_USE";
	this->alias = "sql_USE";
	return 0;
}

Csql_USE::Csql_USE()
{
	this->my_init();
}
