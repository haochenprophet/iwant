#include "sql_CURSOR.h"
int Csql_CURSOR::my_init(void *p)
{
	this->name = "Csql_CURSOR";
	this->alias = "sql_CURSOR";
	return 0;
}

Csql_CURSOR::Csql_CURSOR()
{
	this->my_init();
}
