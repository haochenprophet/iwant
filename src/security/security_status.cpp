#include "security_status.h"
int Csecurity_status::my_init(void *p)
{
	this->name = "Csecurity_status";
	this->alias = "security_status";
	return 0;
}

Csecurity_status::Csecurity_status()
{
	this->my_init();
}

Csecurity_status::~Csecurity_status()
{

}

#ifndef SECURITY_STATUS_TEST
#define SECURITY_STATUS_TEST 0//1
#endif

#if SECURITY_STATUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
