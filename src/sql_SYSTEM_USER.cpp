#include "sql_SYSTEM_USER.h"
int Csql_SYSTEM_USER::my_init(void *p)
{
	this->name = "Csql_SYSTEM_USER";
	this->alias = "sql_SYSTEM_USER";
	return 0;
}

Csql_SYSTEM_USER::Csql_SYSTEM_USER()
{
	this->my_init();
}
