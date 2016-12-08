#include "sql_UNPIVOT.h"
int Csql_UNPIVOT::my_init(void *p)
{
	this->name = "Csql_UNPIVOT";
	this->alias = "sql_UNPIVOT";
	return 0;
}

Csql_UNPIVOT::Csql_UNPIVOT()
{
	this->my_init();
}
