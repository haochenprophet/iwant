#include "sql_EXEC.h"
int Csql_EXEC::my_init(void *p)
{
	this->name = "Csql_EXEC";
	this->alias = "sql_EXEC";
	return 0;
}

Csql_EXEC::Csql_EXEC()
{
	this->my_init();
}
