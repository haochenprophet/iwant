#include "sql_NULLIF.h"
int Csql_NULLIF::my_init(void *p)
{
	this->name = "Csql_NULLIF";
	this->alias = "sql_NULLIF";
	return 0;
}

Csql_NULLIF::Csql_NULLIF()
{
	this->my_init();
}
