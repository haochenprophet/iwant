#include "security_control.h"
int Csecurity_control::my_init(void *p)
{
	this->name = "Csecurity_control";
	this->alias = "security_control";
	return 0;
}

Csecurity_control::Csecurity_control()
{
	this->my_init();
}

Csecurity_control::~Csecurity_control()
{

}

#ifndef SECURITY_CONTROL_TEST
#define SECURITY_CONTROL_TEST 0//1
#endif

#if SECURITY_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
