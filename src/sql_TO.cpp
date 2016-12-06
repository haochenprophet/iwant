#include "sql_TO.h"
int Csql_TO::my_init(void *p)
{
	this->name = "Csql_TO";
	this->alias = "sql_TO";
	return 0;
}

Csql_TO::Csql_TO()
{
	this->my_init();
}
