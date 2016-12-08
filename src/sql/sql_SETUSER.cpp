#include "sql_SETUSER.h"
int Csql_SETUSER::my_init(void *p)
{
	this->name = "Csql_SETUSER";
	this->alias = "sql_SETUSER";
	return 0;
}

Csql_SETUSER::Csql_SETUSER()
{
	this->my_init();
}
