#include "sql_INTERSECT.h"
int Csql_INTERSECT::my_init(void *p)
{
	this->name = "Csql_INTERSECT";
	this->alias = "sql_INTERSECT";
	return 0;
}

Csql_INTERSECT::Csql_INTERSECT()
{
	this->my_init();
}
