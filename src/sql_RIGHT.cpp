#include "sql_RIGHT.h"
int Csql_RIGHT::my_init(void *p)
{
	this->name = "Csql_RIGHT";
	this->alias = "sql_RIGHT";
	return 0;
}

Csql_RIGHT::Csql_RIGHT()
{
	this->my_init();
}
