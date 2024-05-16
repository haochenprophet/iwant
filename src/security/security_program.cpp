#include "security_program.h"
int Csecurity_program::my_init(void *p)
{
	this->name = "Csecurity_program";
	this->alias = "security_program";
	return 0;
}

Csecurity_program::Csecurity_program()
{
	this->my_init();
}

Csecurity_program::~Csecurity_program()
{

}

#ifndef SECURITY_PROGRAM_TEST
#define SECURITY_PROGRAM_TEST 0//1
#endif

#if SECURITY_PROGRAM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
