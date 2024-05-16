#include "security_driving.h"
int Csecurity_driving::my_init(void *p)
{
	this->name = "Csecurity_driving";
	this->alias = "security_driving";
	return 0;
}

Csecurity_driving::Csecurity_driving()
{
	this->my_init();
}

Csecurity_driving::~Csecurity_driving()
{

}

#ifndef SECURITY_DRIVING_TEST
#define SECURITY_DRIVING_TEST 0//1
#endif

#if SECURITY_DRIVING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
