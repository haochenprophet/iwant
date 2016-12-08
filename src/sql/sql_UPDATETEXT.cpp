#include "sql_UPDATETEXT.h"
int Csql_UPDATETEXT::my_init(void *p)
{
	this->name = "Csql_UPDATETEXT";
	this->alias = "sql_UPDATETEXT";
	return 0;
}

Csql_UPDATETEXT::Csql_UPDATETEXT()
{
	this->my_init();
}
