#include "sql_DISK.h"
int Csql_DISK::my_init(void *p)
{
	this->name = "Csql_DISK";
	this->alias = "sql_DISK";
	return 0;
}

Csql_DISK::Csql_DISK()
{
	this->my_init();
}
