#include "security_space.h"
int Csecurity_space::my_init(void *p)
{
	this->name = "Csecurity_space";
	this->alias = "security_space";
	return 0;
}

Csecurity_space::Csecurity_space()
{
	this->my_init();
}

Csecurity_space::~Csecurity_space()
{

}

#ifndef SECURITY_SPACE_TEST
#define SECURITY_SPACE_TEST 0//1
#endif

#if SECURITY_SPACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
