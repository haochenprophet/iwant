#include "sql_ROWGUIDCOL.h"
int Csql_ROWGUIDCOL::my_init(void *p)
{
	this->name = "Csql_ROWGUIDCOL";
	this->alias = "sql_ROWGUIDCOL";
	return 0;
}

Csql_ROWGUIDCOL::Csql_ROWGUIDCOL()
{
	this->my_init();
}
