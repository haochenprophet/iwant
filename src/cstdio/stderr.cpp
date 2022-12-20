#include "stderr.h"
int Cstderr::my_init(void *p)
{
	this->name = "Cstderr";
	this->alias = "stderr";
	return 0;
}

Cstderr::Cstderr()
{
	this->my_init();
}

Cstderr::~Cstderr()
{

}

#ifndef STDERR_TEST
#define STDERR_TEST 0//1
#endif

#if STDERR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
