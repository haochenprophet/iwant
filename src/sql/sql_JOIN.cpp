#include "sql_JOIN.h"
int Csql_JOIN::my_init(void *p)
{
	this->name = "Csql_JOIN";
	this->alias = "sql_JOIN";
	return 0;
}

Csql_JOIN::Csql_JOIN()
{
	this->my_init();
}
