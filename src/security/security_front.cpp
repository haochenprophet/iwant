#include "security_front.h"
int Csecurity_front::my_init(void *p)
{
	this->name = "Csecurity_front";
	this->alias = "security_front";
	return 0;
}

Csecurity_front::Csecurity_front()
{
	this->my_init();
}

Csecurity_front::~Csecurity_front()
{

}

#ifndef SECURITY_FRONT_TEST
#define SECURITY_FRONT_TEST 0//1
#endif

#if SECURITY_FRONT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
