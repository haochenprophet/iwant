#include "sql_TRY_CONVERT.h"
int Csql_TRY_CONVERT::my_init(void *p)
{
	this->name = "Csql_TRY_CONVERT";
	this->alias = "sql_TRY_CONVERT";
	return 0;
}

Csql_TRY_CONVERT::Csql_TRY_CONVERT()
{
	this->my_init();
}
