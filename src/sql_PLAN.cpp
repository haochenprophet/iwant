#include "sql_PLAN.h"
int Csql_PLAN::my_init(void *p)
{
	this->name = "Csql_PLAN";
	this->alias = "sql_PLAN";
	return 0;
}

Csql_PLAN::Csql_PLAN()
{
	this->my_init();
}
