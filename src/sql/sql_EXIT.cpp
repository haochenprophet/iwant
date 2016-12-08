#include "sql_EXIT.h"
int Csql_EXIT::my_init(void *p)
{
	this->name = "Csql_EXIT";
	this->alias = "sql_EXIT";
	return 0;
}

Csql_EXIT::Csql_EXIT()
{
	this->my_init();
}
