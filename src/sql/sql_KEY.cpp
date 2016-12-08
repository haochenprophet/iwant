#include "sql_KEY.h"
int Csql_KEY::my_init(void *p)
{
	this->name = "Csql_KEY";
	this->alias = "sql_KEY";
	return 0;
}

Csql_KEY::Csql_KEY()
{
	this->my_init();
}
