#include "sql_DEALLOCATE.h"
int Csql_DEALLOCATE::my_init(void *p)
{
	this->name = "Csql_DEALLOCATE";
	this->alias = "sql_DEALLOCATE";
	return 0;
}

Csql_DEALLOCATE::Csql_DEALLOCATE()
{
	this->my_init();
}
