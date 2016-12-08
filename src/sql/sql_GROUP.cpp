#include "sql_GROUP.h"
int Csql_GROUP::my_init(void *p)
{
	this->name = "Csql_GROUP";
	this->alias = "sql_GROUP";
	return 0;
}

Csql_GROUP::Csql_GROUP()
{
	this->my_init();
}
