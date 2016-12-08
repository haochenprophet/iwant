#include "sql_ORDER.h"
int Csql_ORDER::my_init(void *p)
{
	this->name = "Csql_ORDER";
	this->alias = "sql_ORDER";
	return 0;
}

Csql_ORDER::Csql_ORDER()
{
	this->my_init();
}
