#include "sql_FOREIGN.h"
int Csql_FOREIGN::my_init(void *p)
{
	this->name = "Csql_FOREIGN";
	this->alias = "sql_FOREIGN";
	return 0;
}

Csql_FOREIGN::Csql_FOREIGN()
{
	this->my_init();
}
