#include "sql_WITH.h"
int Csql_WITH::my_init(void *p)
{
	this->name = "Csql_WITH";
	this->alias = "sql_WITH";
	return 0;
}

Csql_WITH::Csql_WITH()
{
	this->my_init();
}
