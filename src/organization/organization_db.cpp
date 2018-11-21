#include "organization_db.h"
int Corganization_db::my_init(void *p)
{
	this->name = "Corganization_db";
	this->alias = "organization_db";
	return 0;
}

Corganization_db::Corganization_db()
{
	this->my_init();
}

Corganization_db::~Corganization_db()
{

}

#ifndef ORGANIZATION_DB_TEST
#define ORGANIZATION_DB_TEST 0//1
#endif

#if ORGANIZATION_DB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ORGANIZATION_DB_TEST\n\n";

	return 0;
}
#endif 