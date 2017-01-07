#include "my_sql.h"
int Cmy_sql::my_init(void *p)
{
	this->name = "Cmy_sql";
	this->alias = "my_sql";
	return 0;
}

Cmy_sql::Cmy_sql()
{
	this->my_init();
}

Cmy_sql::~Cmy_sql()
{

}
