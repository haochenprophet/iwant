#include "openssl_sha.h"
int Copenssl_sha::my_init(void *p)
{
	this->name = "Copenssl_sha";
	this->alias = "openssl_sha";
	return 0;
}

Copenssl_sha::Copenssl_sha()
{
	this->my_init();
}

Copenssl_sha::~Copenssl_sha()
{

}

#ifndef OPENSSL_SHA_TEST
#define OPENSSL_SHA_TEST 0//1
#endif

#if OPENSSL_SHA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
