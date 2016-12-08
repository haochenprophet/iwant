#include "sql_FUNCTION.h"
int Csql_FUNCTION::my_init(void *p)
{
	this->name = "Csql_FUNCTION";
	this->alias = "sql_FUNCTION";
	return 0;
}

Csql_FUNCTION::Csql_FUNCTION()
{
	this->my_init();
}
