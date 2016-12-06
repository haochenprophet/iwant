#include "sql_PRIMARY.h"
int Csql_PRIMARY::my_init(void *p)
{
	this->name = "Csql_PRIMARY";
	this->alias = "sql_PRIMARY";
	return 0;
}

Csql_PRIMARY::Csql_PRIMARY()
{
	this->my_init();
}
