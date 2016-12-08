#include "sql_ALL.h"
int Csql_ALL::my_init(void *p)
{
	this->name = "Csql_ALL";
	this->alias = "sql_ALL";
	return 0;
}

Csql_ALL::Csql_ALL()
{
	this->my_init();
}
