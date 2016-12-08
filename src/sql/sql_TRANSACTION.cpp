#include "sql_TRANSACTION.h"
int Csql_TRANSACTION::my_init(void *p)
{
	this->name = "Csql_TRANSACTION";
	this->alias = "sql_TRANSACTION";
	return 0;
}

Csql_TRANSACTION::Csql_TRANSACTION()
{
	this->my_init();
}
