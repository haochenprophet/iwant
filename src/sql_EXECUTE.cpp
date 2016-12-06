#include "sql_EXECUTE.h"
int Csql_EXECUTE::my_init(void *p)
{
	this->name = "Csql_EXECUTE";
	this->alias = "sql_EXECUTE";
	return 0;
}

Csql_EXECUTE::Csql_EXECUTE()
{
	this->my_init();
}
