#include "sql_WHILE.h"
int Csql_WHILE::my_init(void *p)
{
	this->name = "Csql_WHILE";
	this->alias = "sql_WHILE";
	return 0;
}

Csql_WHILE::Csql_WHILE()
{
	this->my_init();
}
