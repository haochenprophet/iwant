#include "security_name.h"
int Csecurity_name::my_init(void *p)
{
	this->name = "Csecurity_name";
	this->alias = "security_name";
	return 0;
}

Csecurity_name::Csecurity_name()
{
	this->my_init();
}

Csecurity_name::~Csecurity_name()
{

}

#ifndef SECURITY_NAME_TEST
#define SECURITY_NAME_TEST 0//1
#endif

#if SECURITY_NAME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
