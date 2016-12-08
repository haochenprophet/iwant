#include "sql_NOCHECK.h"
int Csql_NOCHECK::my_init(void *p)
{
	this->name = "Csql_NOCHECK";
	this->alias = "sql_NOCHECK";
	return 0;
}

Csql_NOCHECK::Csql_NOCHECK()
{
	this->my_init();
}
