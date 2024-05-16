#include "security_wait.h"
int Csecurity_wait::my_init(void *p)
{
	this->name = "Csecurity_wait";
	this->alias = "security_wait";
	return 0;
}

Csecurity_wait::Csecurity_wait()
{
	this->my_init();
}

Csecurity_wait::~Csecurity_wait()
{

}

#ifndef SECURITY_WAIT_TEST
#define SECURITY_WAIT_TEST 0//1
#endif

#if SECURITY_WAIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
