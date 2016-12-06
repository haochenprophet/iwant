#include "sql_COMPUTE.h"
int Csql_COMPUTE::my_init(void *p)
{
	this->name = "Csql_COMPUTE";
	this->alias = "sql_COMPUTE";
	return 0;
}

Csql_COMPUTE::Csql_COMPUTE()
{
	this->my_init();
}
