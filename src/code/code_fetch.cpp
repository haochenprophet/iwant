#include "code_fetch.h"
int Ccode_fetch::my_init(void *p)
{
	this->name = "Ccode_fetch";
	this->alias = "code_fetch";
	return 0;
}

Ccode_fetch::Ccode_fetch()
{
	this->my_init();
}

Ccode_fetch::~Ccode_fetch()
{

}

#ifndef CODE_FETCH_TEST
#define CODE_FETCH_TEST 0//1
#endif

#if CODE_FETCH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
