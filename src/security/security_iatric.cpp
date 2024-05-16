#include "security_iatric.h"
int Csecurity_iatric::my_init(void *p)
{
	this->name = "Csecurity_iatric";
	this->alias = "security_iatric";
	return 0;
}

Csecurity_iatric::Csecurity_iatric()
{
	this->my_init();
}

Csecurity_iatric::~Csecurity_iatric()
{

}

#ifndef SECURITY_IATRIC_TEST
#define SECURITY_IATRIC_TEST 0//1
#endif

#if SECURITY_IATRIC_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
