#include "sql_OPEN.h"
int Csql_OPEN::my_init(void *p)
{
	this->name = "Csql_OPEN";
	this->alias = "sql_OPEN";
	return 0;
}

Csql_OPEN::Csql_OPEN()
{
	this->my_init();
}
