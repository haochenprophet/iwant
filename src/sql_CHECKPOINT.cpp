#include "sql_CHECKPOINT.h"
int Csql_CHECKPOINT::my_init(void *p)
{
	this->name = "Csql_CHECKPOINT";
	this->alias = "sql_CHECKPOINT";
	return 0;
}

Csql_CHECKPOINT::Csql_CHECKPOINT()
{
	this->my_init();
}
