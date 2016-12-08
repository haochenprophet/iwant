#include "sql_AS.h"
int Csql_AS::my_init(void *p)
{
	this->name = "Csql_AS";
	this->alias = "sql_AS";
	return 0;
}

Csql_AS::Csql_AS()
{
	this->my_init();
}
