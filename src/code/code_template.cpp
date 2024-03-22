#include "code_template.h"
int Ccode_template::my_init(void *p)
{
	this->name = "Ccode_template";
	this->alias = "code_template";
	return 0;
}

Ccode_template::Ccode_template()
{
	this->my_init();
}

Ccode_template::~Ccode_template()
{

}

#ifndef CODE_TEMPLATE_TEST
#define CODE_TEMPLATE_TEST 0//1
#endif

#if CODE_TEMPLATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
