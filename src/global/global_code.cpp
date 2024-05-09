#include "global_code.h"
int Cglobal_code::my_init(void *p)
{
	this->name = "Cglobal_code";
	this->alias = "global_code";
	return 0;
}

Cglobal_code::Cglobal_code()
{
	this->my_init();
}

Cglobal_code::~Cglobal_code()
{

}

#ifndef GLOBAL_CODE_TEST
#define GLOBAL_CODE_TEST 0//1
#endif

#if GLOBAL_CODE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
