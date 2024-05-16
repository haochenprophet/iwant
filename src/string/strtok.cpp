#include "strtok.h"
int Cstrtok::my_init(void *p)
{
	this->name = "Cstrtok";
	this->alias = "strtok";
	return 0;
}

Cstrtok::Cstrtok()
{
	this->my_init();
}

Cstrtok::~Cstrtok()
{

}

#ifndef STRTOK_TEST
#define STRTOK_TEST 0//1
#endif

#if STRTOK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOK_TEST\n\n";

	return 0;
}
#endif 