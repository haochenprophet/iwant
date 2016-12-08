#include "sql_HOLDLOCK.h"
int Csql_HOLDLOCK::my_init(void *p)
{
	this->name = "Csql_HOLDLOCK";
	this->alias = "sql_HOLDLOCK";
	return 0;
}

Csql_HOLDLOCK::Csql_HOLDLOCK()
{
	this->my_init();
}
