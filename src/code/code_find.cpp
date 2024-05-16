#include "code_find.h"
int Ccode_find::my_init(void *p)
{
	this->name = "Ccode_find";
	this->alias = "code_find";
	return 0;
}

Ccode_find::Ccode_find()
{
	this->my_init();
}

Ccode_find::~Ccode_find()
{

}

#ifndef CODE_FIND_TEST
#define CODE_FIND_TEST 0//1
#endif

#if CODE_FIND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
