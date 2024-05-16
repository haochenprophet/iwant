#include "security_database.h"
int Csecurity_database::my_init(void *p)
{
	this->name = "Csecurity_database";
	this->alias = "security_database";
	return 0;
}

Csecurity_database::Csecurity_database()
{
	this->my_init();
}

Csecurity_database::~Csecurity_database()
{

}

#ifndef SECURITY_DATABASE_TEST
#define SECURITY_DATABASE_TEST 0//1
#endif

#if SECURITY_DATABASE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
