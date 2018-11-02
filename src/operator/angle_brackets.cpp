#include "angle_brackets.h"
int Cangle_brackets::my_init(void *p)
{
	this->name = "Cangle_brackets";
	this->alias = "angle_brackets";
	this->symbol = "<...>";
	return 0;
}

Cangle_brackets::Cangle_brackets()
{
	this->my_init();
}

Cangle_brackets::~Cangle_brackets()
{

}

#ifndef ANGLE_BRACKETS_TEST
#define ANGLE_BRACKETS_TEST 0//1
#endif

#if ANGLE_BRACKETS_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ANGLE_BRACKETS_TEST\n\n";

	return 0;
}
#endif 