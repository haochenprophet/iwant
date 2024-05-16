#include "security_left.h"
int Csecurity_left::my_init(void *p)
{
	this->name = "Csecurity_left";
	this->alias = "security_left";
	return 0;
}

Csecurity_left::Csecurity_left()
{
	this->my_init();
}

Csecurity_left::~Csecurity_left()
{

}

#ifndef SECURITY_LEFT_TEST
#define SECURITY_LEFT_TEST 0//1
#endif

#if SECURITY_LEFT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
