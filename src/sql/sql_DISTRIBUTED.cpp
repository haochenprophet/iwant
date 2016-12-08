#include "sql_DISTRIBUTED.h"
int Csql_DISTRIBUTED::my_init(void *p)
{
	this->name = "Csql_DISTRIBUTED";
	this->alias = "sql_DISTRIBUTED";
	return 0;
}

Csql_DISTRIBUTED::Csql_DISTRIBUTED()
{
	this->my_init();
}
