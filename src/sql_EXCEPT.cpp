#include "sql_EXCEPT.h"
int Csql_EXCEPT::my_init(void *p)
{
	this->name = "Csql_EXCEPT";
	this->alias = "sql_EXCEPT";
	return 0;
}

Csql_EXCEPT::Csql_EXCEPT()
{
	this->my_init();
}
