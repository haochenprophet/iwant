#include "security_information.h"
int Csecurity_information::my_init(void *p)
{
	this->name = "Csecurity_information";
	this->alias = "security_information";
	return 0;
}

Csecurity_information::Csecurity_information()
{
	this->my_init();
}

Csecurity_information::~Csecurity_information()
{

}

#ifndef SECURITY_INFORMATION_TEST
#define SECURITY_INFORMATION_TEST 0//1
#endif

#if SECURITY_INFORMATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
