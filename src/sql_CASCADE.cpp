#include "sql_CASCADE.h"
int Csql_CASCADE::my_init(void *p)
{
	this->name = "Csql_CASCADE";
	this->alias = "sql_CASCADE";
	return 0;
}

Csql_CASCADE::Csql_CASCADE()
{
	this->my_init();
}
