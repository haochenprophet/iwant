#include "rsa.h"
int Crsa::my_init(void *p)
{
	this->name = "Crsa";
	this->alias = "rsa";
	return 0;
}

Crsa::Crsa()
{
	this->my_init();
}

Crsa::~Crsa()
{

}

#ifndef RSA_TEST
#define RSA_TEST 0//1
#endif

#if RSA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
