#include "sql_WHERE.h"
int Csql_WHERE::my_init(void *p)
{
	this->name = "Csql_WHERE";
	this->alias = "sql_WHERE";
	return 0;
}

Csql_WHERE::Csql_WHERE()
{
	this->my_init();
}
