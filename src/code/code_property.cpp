#include "code_property.h"
int Ccode_property::my_init(void *p)
{
	this->name = "Ccode_property";
	this->alias = "code_property";
	return 0;
}

Ccode_property::Ccode_property()
{
	this->my_init();
}

Ccode_property::~Ccode_property()
{

}

#ifndef CODE_PROPERTY_TEST
#define CODE_PROPERTY_TEST 0//1
#endif

#if CODE_PROPERTY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
