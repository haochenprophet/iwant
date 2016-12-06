#include "sql_WITHIN_GROUP.h"
int Csql_WITHIN_GROUP::my_init(void *p)
{
	this->name = "Csql_WITHIN_GROUP";
	this->alias = "sql_WITHIN_GROUP";
	return 0;
}

Csql_WITHIN_GROUP::Csql_WITHIN_GROUP()
{
	this->my_init();
}
