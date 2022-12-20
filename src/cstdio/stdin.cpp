#include "stdin.h"
int Cstdin::my_init(void *p)
{
	this->name = "Cstdin";
	this->alias = "stdin";
	return 0;
}

Cstdin::Cstdin()
{
	this->my_init();
}

Cstdin::~Cstdin()
{

}

#ifndef STDIN_TEST
#define STDIN_TEST 0//1
#endif

#if STDIN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
