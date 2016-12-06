#include "sql_OF.h"
int Csql_OF::my_init(void *p)
{
	this->name = "Csql_OF";
	this->alias = "sql_OF";
	return 0;
}

Csql_OF::Csql_OF()
{
	this->my_init();
}
