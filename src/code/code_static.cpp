#include "code_static.h"
int Ccode_static::my_init(void *p)
{
	this->name = "Ccode_static";
	this->alias = "code_static";
	return 0;
}

Ccode_static::Ccode_static()
{
	this->my_init();
}

Ccode_static::~Ccode_static()
{

}

#ifndef CODE_STATIC_TEST
#define CODE_STATIC_TEST 0//1
#endif

#if CODE_STATIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
