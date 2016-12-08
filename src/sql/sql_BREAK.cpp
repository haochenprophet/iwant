#include "sql_BREAK.h"
int Csql_BREAK::my_init(void *p)
{
	this->name = "Csql_BREAK";
	this->alias = "sql_BREAK";
	return 0;
}

Csql_BREAK::Csql_BREAK()
{
	this->my_init();
}
