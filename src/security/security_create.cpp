#include "security_create.h"
int Csecurity_create::my_init(void *p)
{
	this->name = "Csecurity_create";
	this->alias = "security_create";
	return 0;
}

Csecurity_create::Csecurity_create()
{
	this->my_init();
}

Csecurity_create::~Csecurity_create()
{

}

#ifndef SECURITY_CREATE_TEST
#define SECURITY_CREATE_TEST 0//1
#endif

#if SECURITY_CREATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
