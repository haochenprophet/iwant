#include "sql_FOR.h"
int Csql_FOR::my_init(void *p)
{
	this->name = "Csql_FOR";
	this->alias = "sql_FOR";
	return 0;
}

Csql_FOR::Csql_FOR()
{
	this->my_init();
}
