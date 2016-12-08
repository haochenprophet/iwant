#include "sql_CHECK.h"
int Csql_CHECK::my_init(void *p)
{
	this->name = "Csql_CHECK";
	this->alias = "sql_CHECK";
	return 0;
}

Csql_CHECK::Csql_CHECK()
{
	this->my_init();
}
