#include "code_run.h"
int Ccode_run::my_init(void *p)
{
	this->name = "Ccode_run";
	this->alias = "code_run";
	return 0;
}

Ccode_run::Ccode_run()
{
	this->my_init();
}

Ccode_run::~Ccode_run()
{

}

#ifndef CODE_RUN_TEST
#define CODE_RUN_TEST 0//1
#endif

#if CODE_RUN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
