#include "security_height.h"
int Csecurity_height::my_init(void *p)
{
	this->name = "Csecurity_height";
	this->alias = "security_height";
	return 0;
}

Csecurity_height::Csecurity_height()
{
	this->my_init();
}

Csecurity_height::~Csecurity_height()
{

}

#ifndef SECURITY_HEIGHT_TEST
#define SECURITY_HEIGHT_TEST 0//1
#endif

#if SECURITY_HEIGHT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
