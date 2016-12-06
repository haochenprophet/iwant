#include "sql_ESCAPE.h"
int Csql_ESCAPE::my_init(void *p)
{
	this->name = "Csql_ESCAPE";
	this->alias = "sql_ESCAPE";
	return 0;
}

Csql_ESCAPE::Csql_ESCAPE()
{
	this->my_init();
}
