#include "sql_NONCLUSTERED.h"
int Csql_NONCLUSTERED::my_init(void *p)
{
	this->name = "Csql_NONCLUSTERED";
	this->alias = "sql_NONCLUSTERED";
	return 0;
}

Csql_NONCLUSTERED::Csql_NONCLUSTERED()
{
	this->my_init();
}
