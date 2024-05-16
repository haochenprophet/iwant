#include "code_info.h"
int Ccode_info::my_init(void *p)
{
	this->name = "Ccode_info";
	this->alias = "code_info";
	return 0;
}

Ccode_info::Ccode_info()
{
	this->my_init();
}

Ccode_info::~Ccode_info()
{

}

#ifndef CODE_INFO_TEST
#define CODE_INFO_TEST 0//1
#endif

#if CODE_INFO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
