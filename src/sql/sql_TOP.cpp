#include "sql_TOP.h"
int Csql_TOP::my_init(void *p)
{
	this->name = "Csql_TOP";
	this->alias = "sql_TOP";
	return 0;
}

Csql_TOP::Csql_TOP()
{
	this->my_init();
}
