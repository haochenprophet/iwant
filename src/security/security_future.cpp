#include "security_future.h"
int Csecurity_future::my_init(void *p)
{
	this->name = "Csecurity_future";
	this->alias = "security_future";
	return 0;
}

Csecurity_future::Csecurity_future()
{
	this->my_init();
}

Csecurity_future::~Csecurity_future()
{

}

#ifndef SECURITY_FUTURE_TEST
#define SECURITY_FUTURE_TEST 0//1
#endif

#if SECURITY_FUTURE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
