#include "sql_UNION.h"
int Csql_UNION::my_init(void *p)
{
	this->name = "Csql_UNION";
	this->alias = "sql_UNION";
	return 0;
}

Csql_UNION::Csql_UNION()
{
	this->my_init();
}
