#include "sql_SELECT.h"
int Csql_SELECT::my_init(void *p)
{
	this->name = "Csql_SELECT";
	this->alias = "sql_SELECT";
	return 0;
}

Csql_SELECT::Csql_SELECT()
{
	this->my_init();
}
