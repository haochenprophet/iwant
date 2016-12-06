#include "sql_ERRLVL.h"
int Csql_ERRLVL::my_init(void *p)
{
	this->name = "Csql_ERRLVL";
	this->alias = "sql_ERRLVL";
	return 0;
}

Csql_ERRLVL::Csql_ERRLVL()
{
	this->my_init();
}
