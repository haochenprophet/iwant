#include "sql_GOTO.h"
int Csql_GOTO::my_init(void *p)
{
	this->name = "Csql_GOTO";
	this->alias = "sql_GOTO";
	return 0;
}

Csql_GOTO::Csql_GOTO()
{
	this->my_init();
}
