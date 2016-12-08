#include "sql_DOUBLE.h"
int Csql_DOUBLE::my_init(void *p)
{
	this->name = "Csql_DOUBLE";
	this->alias = "sql_DOUBLE";
	return 0;
}

Csql_DOUBLE::Csql_DOUBLE()
{
	this->my_init();
}
