#include "sql_SHUTDOWN.h"
int Csql_SHUTDOWN::my_init(void *p)
{
	this->name = "Csql_SHUTDOWN";
	this->alias = "sql_SHUTDOWN";
	return 0;
}

Csql_SHUTDOWN::Csql_SHUTDOWN()
{
	this->my_init();
}
