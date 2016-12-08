#include "sql_IN.h"
int Csql_IN::my_init(void *p)
{
	this->name = "Csql_IN";
	this->alias = "sql_IN";
	return 0;
}

Csql_IN::Csql_IN()
{
	this->my_init();
}
