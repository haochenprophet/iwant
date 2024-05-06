#include "security_key.h"
int Csecurity_key::my_init(void *p)
{
	this->name = "Csecurity_key";
	this->alias = "security_key";
	return 0;
}

Csecurity_key::Csecurity_key()
{
	this->my_init();
}

Csecurity_key::~Csecurity_key()
{

}

#ifndef SECURITY_KEY_TEST
#define SECURITY_KEY_TEST 0//1
#endif

#if SECURITY_KEY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
