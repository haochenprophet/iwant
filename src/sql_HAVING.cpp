#include "sql_HAVING.h"
int Csql_HAVING::my_init(void *p)
{
	this->name = "Csql_HAVING";
	this->alias = "sql_HAVING";
	return 0;
}

Csql_HAVING::Csql_HAVING()
{
	this->my_init();
}
