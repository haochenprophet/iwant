#include "security_mode.h"
int Csecurity_mode::my_init(void *p)
{
	this->name = "Csecurity_mode";
	this->alias = "security_mode";
	return 0;
}

Csecurity_mode::Csecurity_mode()
{
	this->my_init();
}

Csecurity_mode::~Csecurity_mode()
{

}

#ifndef SECURITY_MODE_TEST
#define SECURITY_MODE_TEST 0//1
#endif

#if SECURITY_MODE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
