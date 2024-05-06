#include "security_select.h"
int Csecurity_select::my_init(void *p)
{
	this->name = "Csecurity_select";
	this->alias = "security_select";
	return 0;
}

Csecurity_select::Csecurity_select()
{
	this->my_init();
}

Csecurity_select::~Csecurity_select()
{

}

#ifndef SECURITY_SELECT_TEST
#define SECURITY_SELECT_TEST 0//1
#endif

#if SECURITY_SELECT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
