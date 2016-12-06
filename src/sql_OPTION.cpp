#include "sql_OPTION.h"
int Csql_OPTION::my_init(void *p)
{
	this->name = "Csql_OPTION";
	this->alias = "sql_OPTION";
	return 0;
}

Csql_OPTION::Csql_OPTION()
{
	this->my_init();
}
