#include "sql_IF.h"
int Csql_IF::my_init(void *p)
{
	this->name = "Csql_IF";
	this->alias = "sql_IF";
	return 0;
}

Csql_IF::Csql_IF()
{
	this->my_init();
}
