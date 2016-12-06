#include "sql_PROCEDURE.h"
int Csql_PROCEDURE::my_init(void *p)
{
	this->name = "Csql_PROCEDURE";
	this->alias = "sql_PROCEDURE";
	return 0;
}

Csql_PROCEDURE::Csql_PROCEDURE()
{
	this->my_init();
}
