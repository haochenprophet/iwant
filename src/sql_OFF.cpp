#include "sql_OFF.h"
int Csql_OFF::my_init(void *p)
{
	this->name = "Csql_OFF";
	this->alias = "sql_OFF";
	return 0;
}

Csql_OFF::Csql_OFF()
{
	this->my_init();
}
