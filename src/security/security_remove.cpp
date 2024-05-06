#include "security_remove.h"
int Csecurity_remove::my_init(void *p)
{
	this->name = "Csecurity_remove";
	this->alias = "security_remove";
	return 0;
}

Csecurity_remove::Csecurity_remove()
{
	this->my_init();
}

Csecurity_remove::~Csecurity_remove()
{

}

#ifndef SECURITY_REMOVE_TEST
#define SECURITY_REMOVE_TEST 0//1
#endif

#if SECURITY_REMOVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
