#include "sql_OPENXML.h"
int Csql_OPENXML::my_init(void *p)
{
	this->name = "Csql_OPENXML";
	this->alias = "sql_OPENXML";
	return 0;
}

Csql_OPENXML::Csql_OPENXML()
{
	this->my_init();
}
