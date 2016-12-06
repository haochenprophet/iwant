#include "sql_MERGE.h"
int Csql_MERGE::my_init(void *p)
{
	this->name = "Csql_MERGE";
	this->alias = "sql_MERGE";
	return 0;
}

Csql_MERGE::Csql_MERGE()
{
	this->my_init();
}
