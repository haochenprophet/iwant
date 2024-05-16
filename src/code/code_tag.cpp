#include "code_tag.h"
int Ccode_tag::my_init(void *p)
{
	this->name = "Ccode_tag";
	this->alias = "code_tag";
	return 0;
}

Ccode_tag::Ccode_tag()
{
	this->my_init();
}

Ccode_tag::~Ccode_tag()
{

}

#ifndef CODE_TAG_TEST
#define CODE_TAG_TEST 0//1
#endif

#if CODE_TAG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
