#include "sql_COLUMN.h"
int Csql_COLUMN::my_init(void *p)
{
	this->name = "Csql_COLUMN";
	this->alias = "sql_COLUMN";
	return 0;
}

Csql_COLUMN::Csql_COLUMN()
{
	this->my_init();
}
