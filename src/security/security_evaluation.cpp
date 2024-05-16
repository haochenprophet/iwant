#include "security_evaluation.h"
int Csecurity_evaluation::my_init(void *p)
{
	this->name = "Csecurity_evaluation";
	this->alias = "security_evaluation";
	return 0;
}

Csecurity_evaluation::Csecurity_evaluation()
{
	this->my_init();
}

Csecurity_evaluation::~Csecurity_evaluation()
{

}

#ifndef SECURITY_EVALUATION_TEST
#define SECURITY_EVALUATION_TEST 0//1
#endif

#if SECURITY_EVALUATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
