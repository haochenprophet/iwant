#include "security_sql.h"
int Csecurity_sql::my_init(void *p)
{
	this->name = "Csecurity_sql";
	this->alias = "security_sql";
	return 0;
}

Csecurity_sql::Csecurity_sql()
{
	this->my_init();
}

Csecurity_sql::~Csecurity_sql()
{

}

#ifndef SECURITY_SQL_TEST
#define SECURITY_SQL_TEST 0//1
#endif

#if SECURITY_SQL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
