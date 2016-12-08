#include "sql_EXTERNAL.h"
int Csql_EXTERNAL::my_init(void *p)
{
	this->name = "Csql_EXTERNAL";
	this->alias = "sql_EXTERNAL";
	return 0;
}

Csql_EXTERNAL::Csql_EXTERNAL()
{
	this->my_init();
}
