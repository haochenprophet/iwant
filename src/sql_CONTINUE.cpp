#include "sql_CONTINUE.h"
int Csql_CONTINUE::my_init(void *p)
{
	this->name = "Csql_CONTINUE";
	this->alias = "sql_CONTINUE";
	return 0;
}

Csql_CONTINUE::Csql_CONTINUE()
{
	this->my_init();
}
