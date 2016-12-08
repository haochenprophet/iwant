#include "sql_RETURN.h"
int Csql_RETURN::my_init(void *p)
{
	this->name = "Csql_RETURN";
	this->alias = "sql_RETURN";
	return 0;
}

Csql_RETURN::Csql_RETURN()
{
	this->my_init();
}
