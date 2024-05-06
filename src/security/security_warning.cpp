#include "security_warning.h"
int Csecurity_warning::my_init(void *p)
{
	this->name = "Csecurity_warning";
	this->alias = "security_warning";
	return 0;
}

Csecurity_warning::Csecurity_warning()
{
	this->my_init();
}

Csecurity_warning::~Csecurity_warning()
{

}

#ifndef SECURITY_WARNING_TEST
#define SECURITY_WARNING_TEST 0//1
#endif

#if SECURITY_WARNING_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
