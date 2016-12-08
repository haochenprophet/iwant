#include "sql_IDENTITY.h"
int Csql_IDENTITY::my_init(void *p)
{
	this->name = "Csql_IDENTITY";
	this->alias = "sql_IDENTITY";
	return 0;
}

Csql_IDENTITY::Csql_IDENTITY()
{
	this->my_init();
}
