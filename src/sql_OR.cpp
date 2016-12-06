#include "sql_OR.h"
int Csql_OR::my_init(void *p)
{
	this->name = "Csql_OR";
	this->alias = "sql_OR";
	return 0;
}

Csql_OR::Csql_OR()
{
	this->my_init();
}
