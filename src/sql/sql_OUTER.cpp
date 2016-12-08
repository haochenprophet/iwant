#include "sql_OUTER.h"
int Csql_OUTER::my_init(void *p)
{
	this->name = "Csql_OUTER";
	this->alias = "sql_OUTER";
	return 0;
}

Csql_OUTER::Csql_OUTER()
{
	this->my_init();
}
