#include "security_size.h"
int Csecurity_size::my_init(void *p)
{
	this->name = "Csecurity_size";
	this->alias = "security_size";
	return 0;
}

Csecurity_size::Csecurity_size()
{
	this->my_init();
}

Csecurity_size::~Csecurity_size()
{

}

#ifndef SECURITY_SIZE_TEST
#define SECURITY_SIZE_TEST 0//1
#endif

#if SECURITY_SIZE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
