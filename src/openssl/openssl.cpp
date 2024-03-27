#include "openssl.h"
int Copenssl::my_init(void *p)
{
	this->name = "Copenssl";
	this->alias = "openssl";
	return 0;
}

Copenssl::Copenssl()
{
	this->my_init();
}

Copenssl::~Copenssl()
{

}

#ifndef OPENSSL_TEST
#define OPENSSL_TEST 0//1
#endif

#if OPENSSL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
