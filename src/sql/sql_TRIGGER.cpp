#include "sql_TRIGGER.h"
int Csql_TRIGGER::my_init(void *p)
{
	this->name = "Csql_TRIGGER";
	this->alias = "sql_TRIGGER";
	return 0;
}

Csql_TRIGGER::Csql_TRIGGER()
{
	this->my_init();
}
