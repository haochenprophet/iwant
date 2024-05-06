#include "security_auto.h"
int Csecurity_auto::my_init(void *p)
{
	this->name = "Csecurity_auto";
	this->alias = "security_auto";
	return 0;
}

Csecurity_auto::Csecurity_auto()
{
	this->my_init();
}

Csecurity_auto::~Csecurity_auto()
{

}

#ifndef SECURITY_AUTO_TEST
#define SECURITY_AUTO_TEST 0//1
#endif

#if SECURITY_AUTO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
