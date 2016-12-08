#include "sql_VALUES.h"
int Csql_VALUES::my_init(void *p)
{
	this->name = "Csql_VALUES";
	this->alias = "sql_VALUES";
	return 0;
}

Csql_VALUES::Csql_VALUES()
{
	this->my_init();
}
