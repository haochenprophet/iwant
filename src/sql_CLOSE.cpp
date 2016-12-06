#include "sql_CLOSE.h"
int Csql_CLOSE::my_init(void *p)
{
	this->name = "Csql_CLOSE";
	this->alias = "sql_CLOSE";
	return 0;
}

Csql_CLOSE::Csql_CLOSE()
{
	this->my_init();
}
