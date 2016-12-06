#include "sql_RULE.h"
int Csql_RULE::my_init(void *p)
{
	this->name = "Csql_RULE";
	this->alias = "sql_RULE";
	return 0;
}

Csql_RULE::Csql_RULE()
{
	this->my_init();
}
