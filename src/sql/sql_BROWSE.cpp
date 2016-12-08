#include "sql_BROWSE.h"
int Csql_BROWSE::my_init(void *p)
{
	this->name = "Csql_BROWSE";
	this->alias = "sql_BROWSE";
	return 0;
}

Csql_BROWSE::Csql_BROWSE()
{
	this->my_init();
}
