#include "sql_DROP.h"
int Csql_DROP::my_init(void *p)
{
	this->name = "Csql_DROP";
	this->alias = "sql_DROP";
	return 0;
}

Csql_DROP::Csql_DROP()
{
	this->my_init();
}
