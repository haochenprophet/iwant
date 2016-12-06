#include "sql_CROSS.h"
int Csql_CROSS::my_init(void *p)
{
	this->name = "Csql_CROSS";
	this->alias = "sql_CROSS";
	return 0;
}

Csql_CROSS::Csql_CROSS()
{
	this->my_init();
}
