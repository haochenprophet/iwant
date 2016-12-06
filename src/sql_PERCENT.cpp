#include "sql_PERCENT.h"
int Csql_PERCENT::my_init(void *p)
{
	this->name = "Csql_PERCENT";
	this->alias = "sql_PERCENT";
	return 0;
}

Csql_PERCENT::Csql_PERCENT()
{
	this->my_init();
}
