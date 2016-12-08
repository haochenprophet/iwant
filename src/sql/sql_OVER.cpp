#include "sql_OVER.h"
int Csql_OVER::my_init(void *p)
{
	this->name = "Csql_OVER";
	this->alias = "sql_OVER";
	return 0;
}

Csql_OVER::Csql_OVER()
{
	this->my_init();
}
