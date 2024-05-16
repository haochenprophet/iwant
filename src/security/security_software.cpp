#include "security_software.h"
int Csecurity_software::my_init(void *p)
{
	this->name = "Csecurity_software";
	this->alias = "security_software";
	return 0;
}

Csecurity_software::Csecurity_software()
{
	this->my_init();
}

Csecurity_software::~Csecurity_software()
{

}

#ifndef SECURITY_SOFTWARE_TEST
#define SECURITY_SOFTWARE_TEST 0//1
#endif

#if SECURITY_SOFTWARE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
