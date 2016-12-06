#include "sql_INSERT.h"
int Csql_INSERT::my_init(void *p)
{
	this->name = "Csql_INSERT";
	this->alias = "sql_INSERT";
	return 0;
}

Csql_INSERT::Csql_INSERT()
{
	this->my_init();
}
