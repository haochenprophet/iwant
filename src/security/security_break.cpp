#include "security_break.h"
int Csecurity_break::my_init(void *p)
{
	this->name = "Csecurity_break";
	this->alias = "security_break";
	return 0;
}

Csecurity_break::Csecurity_break()
{
	this->my_init();
}

Csecurity_break::~Csecurity_break()
{

}

#ifndef SECURITY_BREAK_TEST
#define SECURITY_BREAK_TEST 0//1
#endif

#if SECURITY_BREAK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
