#include "sql_SEMANTICKEYPHRASETABLE.h"
int Csql_SEMANTICKEYPHRASETABLE::my_init(void *p)
{
	this->name = "Csql_SEMANTICKEYPHRASETABLE";
	this->alias = "sql_SEMANTICKEYPHRASETABLE";
	return 0;
}

Csql_SEMANTICKEYPHRASETABLE::Csql_SEMANTICKEYPHRASETABLE()
{
	this->my_init();
}
