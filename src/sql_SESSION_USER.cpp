#include "sql_SESSION_USER.h"
int Csql_SESSION_USER::my_init(void *p)
{
	this->name = "Csql_SESSION_USER";
	this->alias = "sql_SESSION_USER";
	return 0;
}

Csql_SESSION_USER::Csql_SESSION_USER()
{
	this->my_init();
}
