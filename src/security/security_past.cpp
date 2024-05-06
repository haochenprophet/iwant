#include "security_past.h"
int Csecurity_past::my_init(void *p)
{
	this->name = "Csecurity_past";
	this->alias = "security_past";
	return 0;
}

Csecurity_past::Csecurity_past()
{
	this->my_init();
}

Csecurity_past::~Csecurity_past()
{

}

#ifndef SECURITY_PAST_TEST
#define SECURITY_PAST_TEST 0//1
#endif

#if SECURITY_PAST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
