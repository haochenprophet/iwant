#include "security_margin.h"
int Csecurity_margin::my_init(void *p)
{
	this->name = "Csecurity_margin";
	this->alias = "security_margin";
	return 0;
}

Csecurity_margin::Csecurity_margin()
{
	this->my_init();
}

Csecurity_margin::~Csecurity_margin()
{

}

#ifndef SECURITY_MARGIN_TEST
#define SECURITY_MARGIN_TEST 0//1
#endif

#if SECURITY_MARGIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
