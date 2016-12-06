#include "sql_BACKUP.h"
int Csql_BACKUP::my_init(void *p)
{
	this->name = "Csql_BACKUP";
	this->alias = "sql_BACKUP";
	return 0;
}

Csql_BACKUP::Csql_BACKUP()
{
	this->my_init();
}
