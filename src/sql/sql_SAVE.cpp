#include "sql_SAVE.h"
int Csql_SAVE::my_init(void *p)
{
	this->name = "Csql_SAVE";
	this->alias = "sql_SAVE";
	return 0;
}

Csql_SAVE::Csql_SAVE()
{
	this->my_init();
}
