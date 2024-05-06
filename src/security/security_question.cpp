#include "security_question.h"
int Csecurity_question::my_init(void *p)
{
	this->name = "Csecurity_question";
	this->alias = "security_question";
	return 0;
}

Csecurity_question::Csecurity_question()
{
	this->my_init();
}

Csecurity_question::~Csecurity_question()
{

}

#ifndef SECURITY_QUESTION_TEST
#define SECURITY_QUESTION_TEST 0//1
#endif

#if SECURITY_QUESTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
