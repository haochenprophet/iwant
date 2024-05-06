#include "security_right.h"
int Csecurity_right::my_init(void *p)
{
	this->name = "Csecurity_right";
	this->alias = "security_right";
	return 0;
}

Csecurity_right::Csecurity_right()
{
	this->my_init();
}

Csecurity_right::~Csecurity_right()
{

}

#ifndef SECURITY_RIGHT_TEST
#define SECURITY_RIGHT_TEST 0//1
#endif

#if SECURITY_RIGHT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
