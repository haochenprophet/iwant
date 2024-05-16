#include "code_init.h"
int Ccode_init::my_init(void *p)
{
	this->name = "Ccode_init";
	this->alias = "code_init";
	return 0;
}

Ccode_init::Ccode_init()
{
	this->my_init();
}

Ccode_init::~Ccode_init()
{

}

#ifndef CODE_INIT_TEST
#define CODE_INIT_TEST 0//1
#endif

#if CODE_INIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
