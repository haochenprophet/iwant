#include "sql_DECLARE.h"
int Csql_DECLARE::my_init(void *p)
{
	this->name = "Csql_DECLARE";
	this->alias = "sql_DECLARE";
	return 0;
}

Csql_DECLARE::Csql_DECLARE()
{
	this->my_init();
}
