#include "sql_INDEX.h"
int Csql_INDEX::my_init(void *p)
{
	this->name = "Csql_INDEX";
	this->alias = "sql_INDEX";
	return 0;
}

Csql_INDEX::Csql_INDEX()
{
	this->my_init();
}
