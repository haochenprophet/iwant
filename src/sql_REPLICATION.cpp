#include "sql_REPLICATION.h"
int Csql_REPLICATION::my_init(void *p)
{
	this->name = "Csql_REPLICATION";
	this->alias = "sql_REPLICATION";
	return 0;
}

Csql_REPLICATION::Csql_REPLICATION()
{
	this->my_init();
}
