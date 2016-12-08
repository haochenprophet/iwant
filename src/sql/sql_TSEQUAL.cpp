#include "sql_TSEQUAL.h"
int Csql_TSEQUAL::my_init(void *p)
{
	this->name = "Csql_TSEQUAL";
	this->alias = "sql_TSEQUAL";
	return 0;
}

Csql_TSEQUAL::Csql_TSEQUAL()
{
	this->my_init();
}
