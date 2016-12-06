#include "sql_WAITFOR.h"
int Csql_WAITFOR::my_init(void *p)
{
	this->name = "Csql_WAITFOR";
	this->alias = "sql_WAITFOR";
	return 0;
}

Csql_WAITFOR::Csql_WAITFOR()
{
	this->my_init();
}
