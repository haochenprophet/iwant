#include "sql_KILL.h"
int Csql_KILL::my_init(void *p)
{
	this->name = "Csql_KILL";
	this->alias = "sql_KILL";
	return 0;
}

Csql_KILL::Csql_KILL()
{
	this->my_init();
}
