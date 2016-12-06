#include "sql_READTEXT.h"
int Csql_READTEXT::my_init(void *p)
{
	this->name = "Csql_READTEXT";
	this->alias = "sql_READTEXT";
	return 0;
}

Csql_READTEXT::Csql_READTEXT()
{
	this->my_init();
}
