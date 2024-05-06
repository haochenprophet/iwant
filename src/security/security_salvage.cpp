#include "security_salvage.h"
int Csecurity_salvage::my_init(void *p)
{
	this->name = "Csecurity_salvage";
	this->alias = "security_salvage";
	return 0;
}

Csecurity_salvage::Csecurity_salvage()
{
	this->my_init();
}

Csecurity_salvage::~Csecurity_salvage()
{

}

#ifndef SECURITY_SALVAGE_TEST
#define SECURITY_SALVAGE_TEST 0//1
#endif

#if SECURITY_SALVAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
