#include "sql_IS.h"
int Csql_IS::my_init(void *p)
{
	this->name = "Csql_IS";
	this->alias = "sql_IS";
	return 0;
}

Csql_IS::Csql_IS()
{
	this->my_init();
}
