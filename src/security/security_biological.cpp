#include "security_biological.h"
int Csecurity_biological::my_init(void *p)
{
	this->name = "Csecurity_biological";
	this->alias = "security_biological";
	return 0;
}

Csecurity_biological::Csecurity_biological()
{
	this->my_init();
}

Csecurity_biological::~Csecurity_biological()
{

}

#ifndef SECURITY_BIOLOGICAL_TEST
#define SECURITY_BIOLOGICAL_TEST 0//1
#endif

#if SECURITY_BIOLOGICAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
