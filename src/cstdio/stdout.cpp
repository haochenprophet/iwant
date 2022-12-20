#include "stdout.h"
int Cstdout::my_init(void *p)
{
	this->name = "Cstdout";
	this->alias = "stdout";
	return 0;
}

Cstdout::Cstdout()
{
	this->my_init();
}

Cstdout::~Cstdout()
{

}

#ifndef STDOUT_TEST
#define STDOUT_TEST 0//1
#endif

#if STDOUT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
