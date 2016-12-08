#include "sql_RESTRICT.h"
int Csql_RESTRICT::my_init(void *p)
{
	this->name = "Csql_RESTRICT";
	this->alias = "sql_RESTRICT";
	return 0;
}

Csql_RESTRICT::Csql_RESTRICT()
{
	this->my_init();
}
