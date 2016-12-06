#include "sql_TABLESAMPLE.h"
int Csql_TABLESAMPLE::my_init(void *p)
{
	this->name = "Csql_TABLESAMPLE";
	this->alias = "sql_TABLESAMPLE";
	return 0;
}

Csql_TABLESAMPLE::Csql_TABLESAMPLE()
{
	this->my_init();
}
