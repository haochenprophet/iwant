#include "sql_IDENTITYCOL.h"
int Csql_IDENTITYCOL::my_init(void *p)
{
	this->name = "Csql_IDENTITYCOL";
	this->alias = "sql_IDENTITYCOL";
	return 0;
}

Csql_IDENTITYCOL::Csql_IDENTITYCOL()
{
	this->my_init();
}
