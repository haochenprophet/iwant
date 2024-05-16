#include "code_keyword.h"
int Ccode_keyword::my_init(void *p)
{
	this->name = "Ccode_keyword";
	this->alias = "code_keyword";
	return 0;
}

Ccode_keyword::Ccode_keyword()
{
	this->my_init();
}

Ccode_keyword::~Ccode_keyword()
{

}

#ifndef CODE_KEYWORD_TEST
#define CODE_KEYWORD_TEST 0//1
#endif

#if CODE_KEYWORD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
