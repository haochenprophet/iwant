#include "sql_WHEN.h"
int Csql_WHEN::my_init(void *p)
{
	this->name = "Csql_WHEN";
	this->alias = "sql_WHEN";
	return 0;
}

Csql_WHEN::Csql_WHEN()
{
	this->my_init();
}
