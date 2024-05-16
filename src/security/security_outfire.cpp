#include "security_outfire.h"
int Csecurity_outfire::my_init(void *p)
{
	this->name = "Csecurity_outfire";
	this->alias = "security_outfire";
	return 0;
}

Csecurity_outfire::Csecurity_outfire()
{
	this->my_init();
}

Csecurity_outfire::~Csecurity_outfire()
{

}

#ifndef SECURITY_OUTFIRE_TEST
#define SECURITY_OUTFIRE_TEST 0//1
#endif

#if SECURITY_OUTFIRE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
