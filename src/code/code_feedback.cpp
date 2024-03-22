#include "code_feedback.h"
int Ccode_feedback::my_init(void *p)
{
	this->name = "Ccode_feedback";
	this->alias = "code_feedback";
	return 0;
}

Ccode_feedback::Ccode_feedback()
{
	this->my_init();
}

Ccode_feedback::~Ccode_feedback()
{

}

#ifndef CODE_FEEDBACK_TEST
#define CODE_FEEDBACK_TEST 0//1
#endif

#if CODE_FEEDBACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
