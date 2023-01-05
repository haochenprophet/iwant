#include "signbit.h"
int Csignbit::my_init(void *p)
{
	this->name = "Csignbit";
	this->alias = "signbit";
	return 0;
}

Csignbit::Csignbit()
{
	this->my_init();
}

Csignbit::~Csignbit()
{

}
int Csignbit::signbit_c(double x)
{
	return signbit(x);
}
#ifndef SIGNBIT_TEST
#define SIGNBIT_TEST 0//1
#endif

#if SIGNBIT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
