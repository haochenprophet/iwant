#include "code_pull.h"
int Ccode_pull::my_init(void *p)
{
	this->name = "Ccode_pull";
	this->alias = "code_pull";
	return 0;
}

Ccode_pull::Ccode_pull()
{
	this->my_init();
}

Ccode_pull::~Ccode_pull()
{

}

#ifndef CODE_PULL_TEST
#define CODE_PULL_TEST 0//1
#endif

#if CODE_PULL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
