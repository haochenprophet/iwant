#include "security_add.h"
int Csecurity_add::my_init(void *p)
{
	this->name = "Csecurity_add";
	this->alias = "security_add";
	return 0;
}

Csecurity_add::Csecurity_add()
{
	this->my_init();
}

Csecurity_add::~Csecurity_add()
{

}

#ifndef SECURITY_ADD_TEST
#define SECURITY_ADD_TEST 0//1
#endif

#if SECURITY_ADD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
