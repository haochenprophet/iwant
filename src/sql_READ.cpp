#include "sql_READ.h"
int Csql_READ::my_init(void *p)
{
	this->name = "Csql_READ";
	this->alias = "sql_READ";
	return 0;
}

Csql_READ::Csql_READ()
{
	this->my_init();
}
