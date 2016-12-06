#include "sql_FREETEXT.h"
int Csql_FREETEXT::my_init(void *p)
{
	this->name = "Csql_FREETEXT";
	this->alias = "sql_FREETEXT";
	return 0;
}

Csql_FREETEXT::Csql_FREETEXT()
{
	this->my_init();
}
