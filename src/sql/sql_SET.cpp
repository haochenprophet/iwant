#include "sql_SET.h"
int Csql_SET::my_init(void *p)
{
	this->name = "Csql_SET";
	this->alias = "sql_SET";
	return 0;
}

Csql_SET::Csql_SET()
{
	this->my_init();
}
