#include "sql_COMMIT.h"
int Csql_COMMIT::my_init(void *p)
{
	this->name = "Csql_COMMIT";
	this->alias = "sql_COMMIT";
	return 0;
}

Csql_COMMIT::Csql_COMMIT()
{
	this->my_init();
}
