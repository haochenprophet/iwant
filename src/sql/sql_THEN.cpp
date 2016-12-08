#include "sql_THEN.h"
int Csql_THEN::my_init(void *p)
{
	this->name = "Csql_THEN";
	this->alias = "sql_THEN";
	return 0;
}

Csql_THEN::Csql_THEN()
{
	this->my_init();
}
