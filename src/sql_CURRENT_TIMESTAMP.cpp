#include "sql_CURRENT_TIMESTAMP.h"
int Csql_CURRENT_TIMESTAMP::my_init(void *p)
{
	this->name = "Csql_CURRENT_TIMESTAMP";
	this->alias = "sql_CURRENT_TIMESTAMP";
	return 0;
}

Csql_CURRENT_TIMESTAMP::Csql_CURRENT_TIMESTAMP()
{
	this->my_init();
}
