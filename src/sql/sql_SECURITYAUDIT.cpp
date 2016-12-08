#include "sql_SECURITYAUDIT.h"
int Csql_SECURITYAUDIT::my_init(void *p)
{
	this->name = "Csql_SECURITYAUDIT";
	this->alias = "sql_SECURITYAUDIT";
	return 0;
}

Csql_SECURITYAUDIT::Csql_SECURITYAUDIT()
{
	this->my_init();
}
