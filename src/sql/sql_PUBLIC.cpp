#include "sql_PUBLIC.h"
int Csql_PUBLIC::my_init(void *p)
{
	this->name = "Csql_PUBLIC";
	this->alias = "sql_PUBLIC";
	return 0;
}

Csql_PUBLIC::Csql_PUBLIC()
{
	this->my_init();
}
