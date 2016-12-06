#include "sql_NATIONAL.h"
int Csql_NATIONAL::my_init(void *p)
{
	this->name = "Csql_NATIONAL";
	this->alias = "sql_NATIONAL";
	return 0;
}

Csql_NATIONAL::Csql_NATIONAL()
{
	this->my_init();
}
