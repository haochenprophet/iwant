#include "sql_USER.h"
int Csql_USER::my_init(void *p)
{
	this->name = "Csql_USER";
	this->alias = "sql_USER";
	return 0;
}

Csql_USER::Csql_USER()
{
	this->my_init();
}
