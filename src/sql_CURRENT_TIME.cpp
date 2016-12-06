#include "sql_CURRENT_TIME.h"
int Csql_CURRENT_TIME::my_init(void *p)
{
	this->name = "Csql_CURRENT_TIME";
	this->alias = "sql_CURRENT_TIME";
	return 0;
}

Csql_CURRENT_TIME::Csql_CURRENT_TIME()
{
	this->my_init();
}
