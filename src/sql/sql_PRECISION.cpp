#include "sql_PRECISION.h"
int Csql_PRECISION::my_init(void *p)
{
	this->name = "Csql_PRECISION";
	this->alias = "sql_PRECISION";
	return 0;
}

Csql_PRECISION::Csql_PRECISION()
{
	this->my_init();
}
