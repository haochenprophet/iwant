#include "sql_DUMP.h"
int Csql_DUMP::my_init(void *p)
{
	this->name = "Csql_DUMP";
	this->alias = "sql_DUMP";
	return 0;
}

Csql_DUMP::Csql_DUMP()
{
	this->my_init();
}
