#include "security_home.h"
int Csecurity_home::my_init(void *p)
{
	this->name = "Csecurity_home";
	this->alias = "security_home";
	return 0;
}

Csecurity_home::Csecurity_home()
{
	this->my_init();
}

Csecurity_home::~Csecurity_home()
{

}

#ifndef SECURITY_HOME_TEST
#define SECURITY_HOME_TEST 0//1
#endif

#if SECURITY_HOME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
