#include "sql_ADD.h"
int Csql_ADD::my_init(void *p)
{
	this->name = "Csql_ADD";
	this->alias = "sql_ADD";
	return 0;
}

Csql_ADD::Csql_ADD()
{
	this->my_init();
}
