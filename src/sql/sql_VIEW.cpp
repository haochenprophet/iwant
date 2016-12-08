#include "sql_VIEW.h"
int Csql_VIEW::my_init(void *p)
{
	this->name = "Csql_VIEW";
	this->alias = "sql_VIEW";
	return 0;
}

Csql_VIEW::Csql_VIEW()
{
	this->my_init();
}
