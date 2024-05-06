#include "security_start.h"
int Csecurity_start::my_init(void *p)
{
	this->name = "Csecurity_start";
	this->alias = "security_start";
	return 0;
}

Csecurity_start::Csecurity_start()
{
	this->my_init();
}

Csecurity_start::~Csecurity_start()
{

}

#ifndef SECURITY_START_TEST
#define SECURITY_START_TEST 0//1
#endif

#if SECURITY_START_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
