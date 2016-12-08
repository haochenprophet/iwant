#include "sql_VARYING.h"
int Csql_VARYING::my_init(void *p)
{
	this->name = "Csql_VARYING";
	this->alias = "sql_VARYING";
	return 0;
}

Csql_VARYING::Csql_VARYING()
{
	this->my_init();
}
