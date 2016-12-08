#include "sql_ANY.h"
int Csql_ANY::my_init(void *p)
{
	this->name = "Csql_ANY";
	this->alias = "sql_ANY";
	return 0;
}

Csql_ANY::Csql_ANY()
{
	this->my_init();
}
