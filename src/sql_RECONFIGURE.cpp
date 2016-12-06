#include "sql_RECONFIGURE.h"
int Csql_RECONFIGURE::my_init(void *p)
{
	this->name = "Csql_RECONFIGURE";
	this->alias = "sql_RECONFIGURE";
	return 0;
}

Csql_RECONFIGURE::Csql_RECONFIGURE()
{
	this->my_init();
}
