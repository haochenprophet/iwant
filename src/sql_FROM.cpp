#include "sql_FROM.h"
int Csql_FROM::my_init(void *p)
{
	this->name = "Csql_FROM";
	this->alias = "sql_FROM";
	return 0;
}

Csql_FROM::Csql_FROM()
{
	this->my_init();
}
