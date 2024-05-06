#include "security_action.h"
int Csecurity_action::my_init(void *p)
{
	this->name = "Csecurity_action";
	this->alias = "security_action";
	return 0;
}

Csecurity_action::Csecurity_action()
{
	this->my_init();
}

Csecurity_action::~Csecurity_action()
{

}

#ifndef SECURITY_ACTION_TEST
#define SECURITY_ACTION_TEST 0//1
#endif

#if SECURITY_ACTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
