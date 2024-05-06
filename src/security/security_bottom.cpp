#include "security_bottom.h"
int Csecurity_bottom::my_init(void *p)
{
	this->name = "Csecurity_bottom";
	this->alias = "security_bottom";
	return 0;
}

Csecurity_bottom::Csecurity_bottom()
{
	this->my_init();
}

Csecurity_bottom::~Csecurity_bottom()
{

}

#ifndef SECURITY_BOTTOM_TEST
#define SECURITY_BOTTOM_TEST 0//1
#endif

#if SECURITY_BOTTOM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
