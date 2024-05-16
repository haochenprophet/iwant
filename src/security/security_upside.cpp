#include "security_upside.h"
int Csecurity_upside::my_init(void *p)
{
	this->name = "Csecurity_upside";
	this->alias = "security_upside";
	return 0;
}

Csecurity_upside::Csecurity_upside()
{
	this->my_init();
}

Csecurity_upside::~Csecurity_upside()
{

}

#ifndef SECURITY_UPSIDE_TEST
#define SECURITY_UPSIDE_TEST 0//1
#endif

#if SECURITY_UPSIDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
