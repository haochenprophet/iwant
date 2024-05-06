#include "security_handle.h"
int Csecurity_handle::my_init(void *p)
{
	this->name = "Csecurity_handle";
	this->alias = "security_handle";
	return 0;
}

Csecurity_handle::Csecurity_handle()
{
	this->my_init();
}

Csecurity_handle::~Csecurity_handle()
{

}

#ifndef SECURITY_HANDLE_TEST
#define SECURITY_HANDLE_TEST 0//1
#endif

#if SECURITY_HANDLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
