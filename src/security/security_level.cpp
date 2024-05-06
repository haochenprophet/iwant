#include "security_level.h"
int Csecurity_level::my_init(void *p)
{
	this->name = "Csecurity_level";
	this->alias = "security_level";
	return 0;
}

Csecurity_level::Csecurity_level()
{
	this->my_init();
}

Csecurity_level::~Csecurity_level()
{

}

#ifndef SECURITY_LEVEL_TEST
#define SECURITY_LEVEL_TEST 0//1
#endif

#if SECURITY_LEVEL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
