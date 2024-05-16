#include "code_class.h"
int Ccode_class::my_init(void *p)
{
	this->name = "Ccode_class";
	this->alias = "code_class";
	return 0;
}

Ccode_class::Ccode_class()
{
	this->my_init();
}

Ccode_class::~Ccode_class()
{

}

#ifndef CODE_CLASS_TEST
#define CODE_CLASS_TEST 0//1
#endif

#if CODE_CLASS_TEST
#include "all/all_h_include.h"
int main(int argc, char* argv[])
{
	WHERE_I;

	return 0;
}
#endif