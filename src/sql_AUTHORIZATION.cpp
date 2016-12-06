#include "sql_AUTHORIZATION.h"
int Csql_AUTHORIZATION::my_init(void *p)
{
	this->name = "Csql_AUTHORIZATION";
	this->alias = "sql_AUTHORIZATION";
	return 0;
}

Csql_AUTHORIZATION::Csql_AUTHORIZATION()
{
	this->my_init();
}
