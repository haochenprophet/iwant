#include "security_width.h"
int Csecurity_width::my_init(void *p)
{
	this->name = "Csecurity_width";
	this->alias = "security_width";
	return 0;
}

Csecurity_width::Csecurity_width()
{
	this->my_init();
}

Csecurity_width::~Csecurity_width()
{

}

#ifndef SECURITY_WIDTH_TEST
#define SECURITY_WIDTH_TEST 0//1
#endif

#if SECURITY_WIDTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
