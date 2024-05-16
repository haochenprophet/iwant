#include "security_result.h"
int Csecurity_result::my_init(void *p)
{
	this->name = "Csecurity_result";
	this->alias = "security_result";
	return 0;
}

Csecurity_result::Csecurity_result()
{
	this->my_init();
}

Csecurity_result::~Csecurity_result()
{

}

#ifndef SECURITY_RESULT_TEST
#define SECURITY_RESULT_TEST 0//1
#endif

#if SECURITY_RESULT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
