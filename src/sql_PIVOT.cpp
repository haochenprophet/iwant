#include "sql_PIVOT.h"
int Csql_PIVOT::my_init(void *p)
{
	this->name = "Csql_PIVOT";
	this->alias = "sql_PIVOT";
	return 0;
}

Csql_PIVOT::Csql_PIVOT()
{
	this->my_init();
}
