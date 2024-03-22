#include "code_action.h"
int Ccode_action::my_init(void *p)
{
	this->name = "Ccode_action";
	this->alias = "code_action";
	return 0;
}

Ccode_action::Ccode_action()
{
	this->my_init();
}

Ccode_action::~Ccode_action()
{

}

#ifndef CODE_ACTION_TEST
#define CODE_ACTION_TEST 0//1
#endif

#if CODE_ACTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
