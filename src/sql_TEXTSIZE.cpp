#include "sql_TEXTSIZE.h"
int Csql_TEXTSIZE::my_init(void *p)
{
	this->name = "Csql_TEXTSIZE";
	this->alias = "sql_TEXTSIZE";
	return 0;
}

Csql_TEXTSIZE::Csql_TEXTSIZE()
{
	this->my_init();
}
