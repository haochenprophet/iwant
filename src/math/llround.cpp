#include "llround.h"
int Cllround::my_init(void *p)
{
	this->name = "Cllround";
	this->alias = "llround";
	return 0;
}

Cllround::Cllround()
{
	this->my_init();
}

Cllround::~Cllround()
{

}

#ifndef LLROUND_TEST
#define LLROUND_TEST 0//1
#endif

#if LLROUND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LLROUND_TEST\n\n";

	return 0;
}
#endif 