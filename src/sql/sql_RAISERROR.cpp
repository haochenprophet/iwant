#include "sql_RAISERROR.h"
int Csql_RAISERROR::my_init(void *p)
{
	this->name = "Csql_RAISERROR";
	this->alias = "sql_RAISERROR";
	return 0;
}

Csql_RAISERROR::Csql_RAISERROR()
{
	this->my_init();
}
