#include "security_box.h"
int Csecurity_box::my_init(void *p)
{
	this->name = "Csecurity_box";
	this->alias = "security_box";
	return 0;
}

Csecurity_box::Csecurity_box()
{
	this->my_init();
}

Csecurity_box::~Csecurity_box()
{

}

#ifndef SECURITY_BOX_TEST
#define SECURITY_BOX_TEST 0//1
#endif

#if SECURITY_BOX_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
