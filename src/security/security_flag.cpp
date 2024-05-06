#include "security_flag.h"
int Csecurity_flag::my_init(void *p)
{
	this->name = "Csecurity_flag";
	this->alias = "security_flag";
	return 0;
}

Csecurity_flag::Csecurity_flag()
{
	this->my_init();
}

Csecurity_flag::~Csecurity_flag()
{

}

#ifndef SECURITY_FLAG_TEST
#define SECURITY_FLAG_TEST 0//1
#endif

#if SECURITY_FLAG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
