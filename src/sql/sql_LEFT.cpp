#include "sql_LEFT.h"
int Csql_LEFT::my_init(void *p)
{
	this->name = "Csql_LEFT";
	this->alias = "sql_LEFT";
	return 0;
}

Csql_LEFT::Csql_LEFT()
{
	this->my_init();
}
