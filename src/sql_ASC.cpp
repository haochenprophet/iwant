#include "sql_ASC.h"
int Csql_ASC::my_init(void *p)
{
	this->name = "Csql_ASC";
	this->alias = "sql_ASC";
	return 0;
}

Csql_ASC::Csql_ASC()
{
	this->my_init();
}
