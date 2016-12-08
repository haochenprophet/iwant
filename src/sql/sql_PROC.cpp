#include "sql_PROC.h"
int Csql_PROC::my_init(void *p)
{
	this->name = "Csql_PROC";
	this->alias = "sql_PROC";
	return 0;
}

Csql_PROC::Csql_PROC()
{
	this->my_init();
}
