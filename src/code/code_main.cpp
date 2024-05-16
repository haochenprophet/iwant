#include "code_main.h"
int Ccode_main::my_init(void *p)
{
	this->name = "Ccode_main";
	this->alias = "code_main";
	return 0;
}

Ccode_main::Ccode_main()
{
	this->my_init();
}

Ccode_main::~Ccode_main()
{

}

#ifndef CODE_MAIN_TEST
#define CODE_MAIN_TEST 0//1
#endif

#if CODE_MAIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
