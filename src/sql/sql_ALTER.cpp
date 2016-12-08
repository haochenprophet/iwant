#include "sql_ALTER.h"
int Csql_ALTER::my_init(void *p)
{
	this->name = "Csql_ALTER";
	this->alias = "sql_ALTER";
	return 0;
}

Csql_ALTER::Csql_ALTER()
{
	this->my_init();
}
