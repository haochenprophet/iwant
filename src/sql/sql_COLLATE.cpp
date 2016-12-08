#include "sql_COLLATE.h"
int Csql_COLLATE::my_init(void *p)
{
	this->name = "Csql_COLLATE";
	this->alias = "sql_COLLATE";
	return 0;
}

Csql_COLLATE::Csql_COLLATE()
{
	this->my_init();
}
