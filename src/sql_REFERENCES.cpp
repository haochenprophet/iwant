#include "sql_REFERENCES.h"
int Csql_REFERENCES::my_init(void *p)
{
	this->name = "Csql_REFERENCES";
	this->alias = "sql_REFERENCES";
	return 0;
}

Csql_REFERENCES::Csql_REFERENCES()
{
	this->my_init();
}
