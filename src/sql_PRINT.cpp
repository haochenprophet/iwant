#include "sql_PRINT.h"
int Csql_PRINT::my_init(void *p)
{
	this->name = "Csql_PRINT";
	this->alias = "sql_PRINT";
	return 0;
}

Csql_PRINT::Csql_PRINT()
{
	this->my_init();
}
