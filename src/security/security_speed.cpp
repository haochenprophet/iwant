#include "security_speed.h"
int Csecurity_speed::my_init(void *p)
{
	this->name = "Csecurity_speed";
	this->alias = "security_speed";
	return 0;
}

Csecurity_speed::Csecurity_speed()
{
	this->my_init();
}

Csecurity_speed::~Csecurity_speed()
{

}

#ifndef SECURITY_SPEED_TEST
#define SECURITY_SPEED_TEST 0//1
#endif

#if SECURITY_SPEED_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
