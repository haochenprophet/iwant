#include "sql_CONSTRAINT.h"
int Csql_CONSTRAINT::my_init(void *p)
{
	this->name = "Csql_CONSTRAINT";
	this->alias = "sql_CONSTRAINT";
	return 0;
}

Csql_CONSTRAINT::Csql_CONSTRAINT()
{
	this->my_init();
}
