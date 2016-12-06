#include "sql_DESC.h"
int Csql_DESC::my_init(void *p)
{
	this->name = "Csql_DESC";
	this->alias = "sql_DESC";
	return 0;
}

Csql_DESC::Csql_DESC()
{
	this->my_init();
}
