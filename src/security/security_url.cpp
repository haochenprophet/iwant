#include "security_url.h"
int Csecurity_url::my_init(void *p)
{
	this->name = "Csecurity_url";
	this->alias = "security_url";
	return 0;
}

Csecurity_url::Csecurity_url()
{
	this->my_init();
}

Csecurity_url::~Csecurity_url()
{

}

#ifndef SECURITY_URL_TEST
#define SECURITY_URL_TEST 0//1
#endif

#if SECURITY_URL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
