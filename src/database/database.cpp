#include "database.h"
int Cdatabase::my_init(void *p)
{
	this->name = "Cdatabase";
	this->alias = "database";
	return 0;
}

Cdatabase::Cdatabase()
{
	this->my_init();
}

Cdatabase::~Cdatabase()
{

}

#ifndef DATABASE_TEST
#define DATABASE_TEST 0//1
#endif

#if DATABASE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DATABASE_TEST\n\n";

	return 0;
}
#endif 