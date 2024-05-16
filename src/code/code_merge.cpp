#include "code_merge.h"
int Ccode_merge::my_init(void *p)
{
	this->name = "Ccode_merge";
	this->alias = "code_merge";
	return 0;
}

Ccode_merge::Ccode_merge()
{
	this->my_init();
}

Ccode_merge::~Ccode_merge()
{

}

#ifndef CODE_MERGE_TEST
#define CODE_MERGE_TEST 0//1
#endif

#if CODE_MERGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
