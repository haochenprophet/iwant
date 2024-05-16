#include "code_fork.h"
int Ccode_fork::my_init(void *p)
{
	this->name = "Ccode_fork";
	this->alias = "code_fork";
	return 0;
}

Ccode_fork::Ccode_fork()
{
	this->my_init();
}

Ccode_fork::~Ccode_fork()
{

}

#ifndef CODE_FORK_TEST
#define CODE_FORK_TEST 0//1
#endif

#if CODE_FORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
