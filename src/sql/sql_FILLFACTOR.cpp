#include "sql_FILLFACTOR.h"
int Csql_FILLFACTOR::my_init(void *p)
{
	this->name = "Csql_FILLFACTOR";
	this->alias = "sql_FILLFACTOR";
	return 0;
}

Csql_FILLFACTOR::Csql_FILLFACTOR()
{
	this->my_init();
}
