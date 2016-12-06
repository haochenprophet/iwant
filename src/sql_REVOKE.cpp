#include "sql_REVOKE.h"
int Csql_REVOKE::my_init(void *p)
{
	this->name = "Csql_REVOKE";
	this->alias = "sql_REVOKE";
	return 0;
}

Csql_REVOKE::Csql_REVOKE()
{
	this->my_init();
}
