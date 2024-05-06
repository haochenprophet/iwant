#include "security_cold.h"
int Csecurity_cold::my_init(void *p)
{
	this->name = "Csecurity_cold";
	this->alias = "security_cold";
	return 0;
}

Csecurity_cold::Csecurity_cold()
{
	this->my_init();
}

Csecurity_cold::~Csecurity_cold()
{

}

#ifndef SECURITY_COLD_TEST
#define SECURITY_COLD_TEST 0//1
#endif

#if SECURITY_COLD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
