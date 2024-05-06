#include "security_fire.h"
int Csecurity_fire::my_init(void *p)
{
	this->name = "Csecurity_fire";
	this->alias = "security_fire";
	return 0;
}

Csecurity_fire::Csecurity_fire()
{
	this->my_init();
}

Csecurity_fire::~Csecurity_fire()
{

}

#ifndef SECURITY_FIRE_TEST
#define SECURITY_FIRE_TEST 0//1
#endif

#if SECURITY_FIRE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
