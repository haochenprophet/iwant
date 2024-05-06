#include "security_bag.h"
int Csecurity_bag::my_init(void *p)
{
	this->name = "Csecurity_bag";
	this->alias = "security_bag";
	return 0;
}

Csecurity_bag::Csecurity_bag()
{
	this->my_init();
}

Csecurity_bag::~Csecurity_bag()
{

}

#ifndef SECURITY_BAG_TEST
#define SECURITY_BAG_TEST 0//1
#endif

#if SECURITY_BAG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
