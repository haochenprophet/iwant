#include "sql_CREATE.h"
int Csql_CREATE::my_init(void *p)
{
	this->name = "Csql_CREATE";
	this->alias = "sql_CREATE";
	return 0;
}

Csql_CREATE::Csql_CREATE()
{
	this->my_init();
}
