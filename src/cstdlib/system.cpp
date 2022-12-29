#include "system.h"
int Csystem::my_init(void *p)
{
	this->name = "Csystem";
	this->alias = "system";
	return 0;
}

Csystem::Csystem()
{
	this->my_init();
}

Csystem::~Csystem()
{

}
int Csystem::system_c(const char* command)
{
	return system(command);
}
#ifndef SYSTEM_TEST
#define SYSTEM_TEST 0//1
#endif

#if SYSTEM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SYSTEM_TEST\n\n";

	return 0;
}
#endif 