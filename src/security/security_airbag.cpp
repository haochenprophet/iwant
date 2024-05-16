#include "security_airbag.h"
int Csecurity_airbag::my_init(void *p)
{
	this->name = "Csecurity_airbag";
	this->alias = "security_airbag";
	return 0;
}

Csecurity_airbag::Csecurity_airbag()
{
	this->my_init();
}

Csecurity_airbag::~Csecurity_airbag()
{

}

#ifndef SECURITY_AIRBAG_TEST
#define SECURITY_AIRBAG_TEST 0//1
#endif

#if SECURITY_AIRBAG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
