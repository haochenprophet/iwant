#include "sql_TABLE.h"
int Csql_TABLE::my_init(void *p)
{
	this->name = "Csql_TABLE";
	this->alias = "sql_TABLE";
	return 0;
}

Csql_TABLE::Csql_TABLE()
{
	this->my_init();
}
