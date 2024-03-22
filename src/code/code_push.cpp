#include "code_push.h"
int Ccode_push::my_init(void *p)
{
	this->name = "Ccode_push";
	this->alias = "code_push";
	return 0;
}

Ccode_push::Ccode_push()
{
	this->my_init();
}

Ccode_push::~Ccode_push()
{

}

#ifndef CODE_PUSH_TEST
#define CODE_PUSH_TEST 0//1
#endif

#if CODE_PUSH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
