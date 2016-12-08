#include "sql_STATISTICS.h"
int Csql_STATISTICS::my_init(void *p)
{
	this->name = "Csql_STATISTICS";
	this->alias = "sql_STATISTICS";
	return 0;
}

Csql_STATISTICS::Csql_STATISTICS()
{
	this->my_init();
}
