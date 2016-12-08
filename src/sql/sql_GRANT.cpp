#include "sql_GRANT.h"
int Csql_GRANT::my_init(void *p)
{
	this->name = "Csql_GRANT";
	this->alias = "sql_GRANT";
	return 0;
}

Csql_GRANT::Csql_GRANT()
{
	this->my_init();
}
