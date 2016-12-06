#include "sql_FREETEXTTABLE.h"
int Csql_FREETEXTTABLE::my_init(void *p)
{
	this->name = "Csql_FREETEXTTABLE";
	this->alias = "sql_FREETEXTTABLE";
	return 0;
}

Csql_FREETEXTTABLE::Csql_FREETEXTTABLE()
{
	this->my_init();
}
