#include "security_escape.h"
int Csecurity_escape::my_init(void *p)
{
	this->name = "Csecurity_escape";
	this->alias = "security_escape";
	return 0;
}

Csecurity_escape::Csecurity_escape()
{
	this->my_init();
}

Csecurity_escape::~Csecurity_escape()
{

}

#ifndef SECURITY_ESCAPE_TEST
#define SECURITY_ESCAPE_TEST 0//1
#endif

#if SECURITY_ESCAPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
