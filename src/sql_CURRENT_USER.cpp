#include "sql_CURRENT_USER.h"
int Csql_CURRENT_USER::my_init(void *p)
{
	this->name = "Csql_CURRENT_USER";
	this->alias = "sql_CURRENT_USER";
	return 0;
}

Csql_CURRENT_USER::Csql_CURRENT_USER()
{
	this->my_init();
}
