#include "code_syntax.h"
int Ccode_syntax::my_init(void *p)
{
	this->name = "Ccode_syntax";
	this->alias = "code_syntax";
	return 0;
}

Ccode_syntax::Ccode_syntax()
{
	this->my_init();
}

Ccode_syntax::~Ccode_syntax()
{

}

#ifndef CODE_SYNTAX_TEST
#define CODE_SYNTAX_TEST 0//1
#endif

#if CODE_SYNTAX_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
