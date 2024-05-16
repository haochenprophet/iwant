#include "security_chair.h"
int Csecurity_chair::my_init(void *p)
{
	this->name = "Csecurity_chair";
	this->alias = "security_chair";
	return 0;
}

Csecurity_chair::Csecurity_chair()
{
	this->my_init();
}

Csecurity_chair::~Csecurity_chair()
{

}

#ifndef SECURITY_CHAIR_TEST
#define SECURITY_CHAIR_TEST 0//1
#endif

#if SECURITY_CHAIR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
