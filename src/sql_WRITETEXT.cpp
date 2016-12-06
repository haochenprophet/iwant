#include "sql_WRITETEXT.h"
int Csql_WRITETEXT::my_init(void *p)
{
	this->name = "Csql_WRITETEXT";
	this->alias = "sql_WRITETEXT";
	return 0;
}

Csql_WRITETEXT::Csql_WRITETEXT()
{
	this->my_init();
}
