#include "sql_END.h"
int Csql_END::my_init(void *p)
{
	this->name = "Csql_END";
	this->alias = "sql_END";
	return 0;
}

Csql_END::Csql_END()
{
	this->my_init();
}
