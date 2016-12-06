#include "sql_EXISTS.h"
int Csql_EXISTS::my_init(void *p)
{
	this->name = "Csql_EXISTS";
	this->alias = "sql_EXISTS";
	return 0;
}

Csql_EXISTS::Csql_EXISTS()
{
	this->my_init();
}
