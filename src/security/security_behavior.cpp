#include "security_behavior.h"
int Csecurity_behavior::my_init(void *p)
{
	this->name = "Csecurity_behavior";
	this->alias = "security_behavior";
	return 0;
}

Csecurity_behavior::Csecurity_behavior()
{
	this->my_init();
}

Csecurity_behavior::~Csecurity_behavior()
{

}

#ifndef SECURITY_BEHAVIOR_TEST
#define SECURITY_BEHAVIOR_TEST 0//1
#endif

#if SECURITY_BEHAVIOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
