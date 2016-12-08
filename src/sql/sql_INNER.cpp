#include "sql_INNER.h"
int Csql_INNER::my_init(void *p)
{
	this->name = "Csql_INNER";
	this->alias = "sql_INNER";
	return 0;
}

Csql_INNER::Csql_INNER()
{
	this->my_init();
}
