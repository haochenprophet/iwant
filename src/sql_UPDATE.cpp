#include "sql_UPDATE.h"
int Csql_UPDATE::my_init(void *p)
{
	this->name = "Csql_UPDATE";
	this->alias = "sql_UPDATE";
	return 0;
}

Csql_UPDATE::Csql_UPDATE()
{
	this->my_init();
}
