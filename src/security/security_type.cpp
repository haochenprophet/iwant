#include "security_type.h"
int Csecurity_type::my_init(void *p)
{
	this->name = "Csecurity_type";
	this->alias = "security_type";
	return 0;
}

Csecurity_type::Csecurity_type()
{
	this->my_init();
}

Csecurity_type::~Csecurity_type()
{

}

#ifndef SECURITY_TYPE_TEST
#define SECURITY_TYPE_TEST 0//1
#endif

#if SECURITY_TYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
