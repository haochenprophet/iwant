#include "sql_LIKE.h"
int Csql_LIKE::my_init(void *p)
{
	this->name = "Csql_LIKE";
	this->alias = "sql_LIKE";
	return 0;
}

Csql_LIKE::Csql_LIKE()
{
	this->my_init();
}
