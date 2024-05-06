#include "security_lock.h"
int Csecurity_lock::my_init(void *p)
{
	this->name = "Csecurity_lock";
	this->alias = "security_lock";
	return 0;
}

Csecurity_lock::Csecurity_lock()
{
	this->my_init();
}

Csecurity_lock::~Csecurity_lock()
{

}

#ifndef SECURITY_LOCK_TEST
#define SECURITY_LOCK_TEST 0//1
#endif

#if SECURITY_LOCK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
