#include "security_when.h"
int Csecurity_when::my_init(void *p)
{
	this->name = "Csecurity_when";
	this->alias = "security_when";
	return 0;
}

Csecurity_when::Csecurity_when()
{
	this->my_init();
}

Csecurity_when::~Csecurity_when()
{

}

#ifndef SECURITY_WHEN_TEST
#define SECURITY_WHEN_TEST 0//1
#endif

#if SECURITY_WHEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
