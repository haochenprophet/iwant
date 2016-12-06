#include "sql_CURRENT_DATE.h"
int Csql_CURRENT_DATE::my_init(void *p)
{
	this->name = "Csql_CURRENT_DATE";
	this->alias = "sql_CURRENT_DATE";
	return 0;
}

Csql_CURRENT_DATE::Csql_CURRENT_DATE()
{
	this->my_init();
}
