#include "sql_TRUNCATE.h"
int Csql_TRUNCATE::my_init(void *p)
{
	this->name = "Csql_TRUNCATE";
	this->alias = "sql_TRUNCATE";
	return 0;
}

Csql_TRUNCATE::Csql_TRUNCATE()
{
	this->my_init();
}
