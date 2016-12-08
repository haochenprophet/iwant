#include "sql_DEFAULT.h"
int Csql_DEFAULT::my_init(void *p)
{
	this->name = "Csql_DEFAULT";
	this->alias = "sql_DEFAULT";
	return 0;
}

Csql_DEFAULT::Csql_DEFAULT()
{
	this->my_init();
}
