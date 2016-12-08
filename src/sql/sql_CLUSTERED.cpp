#include "sql_CLUSTERED.h"
int Csql_CLUSTERED::my_init(void *p)
{
	this->name = "Csql_CLUSTERED";
	this->alias = "sql_CLUSTERED";
	return 0;
}

Csql_CLUSTERED::Csql_CLUSTERED()
{
	this->my_init();
}
