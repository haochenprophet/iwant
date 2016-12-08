#include "sql_FETCH.h"
int Csql_FETCH::my_init(void *p)
{
	this->name = "Csql_FETCH";
	this->alias = "sql_FETCH";
	return 0;
}

Csql_FETCH::Csql_FETCH()
{
	this->my_init();
}
