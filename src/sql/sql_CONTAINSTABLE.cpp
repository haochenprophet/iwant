#include "sql_CONTAINSTABLE.h"
int Csql_CONTAINSTABLE::my_init(void *p)
{
	this->name = "Csql_CONTAINSTABLE";
	this->alias = "sql_CONTAINSTABLE";
	return 0;
}

Csql_CONTAINSTABLE::Csql_CONTAINSTABLE()
{
	this->my_init();
}
