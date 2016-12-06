#include "sql_BEGIN.h"
int Csql_BEGIN::my_init(void *p)
{
	this->name = "Csql_BEGIN";
	this->alias = "sql_BEGIN";
	return 0;
}

Csql_BEGIN::Csql_BEGIN()
{
	this->my_init();
}
