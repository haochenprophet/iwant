#include "code_library.h"
int Ccode_library::my_init(void *p)
{
	this->name = "Ccode_library";
	this->alias = "code_library";
	return 0;
}

Ccode_library::Ccode_library()
{
	this->my_init();
}

Ccode_library::~Ccode_library()
{

}

#ifndef CODE_LIBRARY_TEST
#define CODE_LIBRARY_TEST 0//1
#endif

#if CODE_LIBRARY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
