#include "sql_SOME.h"
int Csql_SOME::my_init(void *p)
{
	this->name = "Csql_SOME";
	this->alias = "sql_SOME";
	return 0;
}

Csql_SOME::Csql_SOME()
{
	this->my_init();
}
