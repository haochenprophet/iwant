#include "sql_ON.h"
int Csql_ON::my_init(void *p)
{
	this->name = "Csql_ON";
	this->alias = "sql_ON";
	return 0;
}

Csql_ON::Csql_ON()
{
	this->my_init();
}
