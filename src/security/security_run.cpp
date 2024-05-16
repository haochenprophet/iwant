#include "security_run.h"
int Csecurity_run::my_init(void *p)
{
	this->name = "Csecurity_run";
	this->alias = "security_run";
	return 0;
}

Csecurity_run::Csecurity_run()
{
	this->my_init();
}

Csecurity_run::~Csecurity_run()
{

}

#ifndef SECURITY_RUN_TEST
#define SECURITY_RUN_TEST 0//1
#endif

#if SECURITY_RUN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
