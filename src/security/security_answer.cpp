#include "security_answer.h"
int Csecurity_answer::my_init(void *p)
{
	this->name = "Csecurity_answer";
	this->alias = "security_answer";
	return 0;
}

Csecurity_answer::Csecurity_answer()
{
	this->my_init();
}

Csecurity_answer::~Csecurity_answer()
{

}

#ifndef SECURITY_ANSWER_TEST
#define SECURITY_ANSWER_TEST 0//1
#endif

#if SECURITY_ANSWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
