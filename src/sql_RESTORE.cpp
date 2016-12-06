#include "sql_RESTORE.h"
int Csql_RESTORE::my_init(void *p)
{
	this->name = "Csql_RESTORE";
	this->alias = "sql_RESTORE";
	return 0;
}

Csql_RESTORE::Csql_RESTORE()
{
	this->my_init();
}
