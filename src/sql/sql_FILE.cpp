#include "sql_FILE.h"
int Csql_FILE::my_init(void *p)
{
	this->name = "Csql_FILE";
	this->alias = "sql_FILE";
	return 0;
}

Csql_FILE::Csql_FILE()
{
	this->my_init();
}
