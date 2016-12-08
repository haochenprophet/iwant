#include "sql_LINENO.h"
int Csql_LINENO::my_init(void *p)
{
	this->name = "Csql_LINENO";
	this->alias = "sql_LINENO";
	return 0;
}

Csql_LINENO::Csql_LINENO()
{
	this->my_init();
}
