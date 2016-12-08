#include "sql_OFFSETS.h"
int Csql_OFFSETS::my_init(void *p)
{
	this->name = "Csql_OFFSETS";
	this->alias = "sql_OFFSETS";
	return 0;
}

Csql_OFFSETS::Csql_OFFSETS()
{
	this->my_init();
}
