#include "sql_CONVERT.h"
int Csql_CONVERT::my_init(void *p)
{
	this->name = "Csql_CONVERT";
	this->alias = "sql_CONVERT";
	return 0;
}

Csql_CONVERT::Csql_CONVERT()
{
	this->my_init();
}
