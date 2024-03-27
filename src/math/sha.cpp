#include "sha.h"
int Csha::my_init(void *p)
{
	this->name = "Csha";
	this->alias = "sha";
	return 0;
}

Csha::Csha()
{
	this->my_init();
}

Csha::~Csha()
{

}

#ifndef SHA_TEST
#define SHA_TEST 0//1
#endif

#if SHA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
