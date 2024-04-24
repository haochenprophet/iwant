#include "life_security.h"
int Clife_security::my_init(void *p)
{
	this->name = "Clife_security";
	this->alias = "life_security";
	return 0;
}

Clife_security::Clife_security()
{
	this->my_init();
}

Clife_security::~Clife_security()
{

}

#ifndef LIFE_SECURITY_TEST
#define LIFE_SECURITY_TEST 0//1
#endif

#if LIFE_SECURITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
