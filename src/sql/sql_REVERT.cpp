#include "sql_REVERT.h"
int Csql_REVERT::my_init(void *p)
{
	this->name = "Csql_REVERT";
	this->alias = "sql_REVERT";
	return 0;
}

Csql_REVERT::Csql_REVERT()
{
	this->my_init();
}
