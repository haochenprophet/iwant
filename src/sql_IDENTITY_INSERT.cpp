#include "sql_IDENTITY_INSERT.h"
int Csql_IDENTITY_INSERT::my_init(void *p)
{
	this->name = "Csql_IDENTITY_INSERT";
	this->alias = "sql_IDENTITY_INSERT";
	return 0;
}

Csql_IDENTITY_INSERT::Csql_IDENTITY_INSERT()
{
	this->my_init();
}
