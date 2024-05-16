#include "security_back.h"
int Csecurity_back::my_init(void *p)
{
	this->name = "Csecurity_back";
	this->alias = "security_back";
	return 0;
}

Csecurity_back::Csecurity_back()
{
	this->my_init();
}

Csecurity_back::~Csecurity_back()
{

}

#ifndef SECURITY_BACK_TEST
#define SECURITY_BACK_TEST 0//1
#endif

#if SECURITY_BACK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
