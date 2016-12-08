#include "sql_OPENROWSET.h"
int Csql_OPENROWSET::my_init(void *p)
{
	this->name = "Csql_OPENROWSET";
	this->alias = "sql_OPENROWSET";
	return 0;
}

Csql_OPENROWSET::Csql_OPENROWSET()
{
	this->my_init();
}
