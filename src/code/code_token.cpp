#include "code_token.h"
int Ccode_token::my_init(void *p)
{
	this->name = "Ccode_token";
	this->alias = "code_token";
	return 0;
}

Ccode_token::Ccode_token()
{
	this->my_init();
}

Ccode_token::~Ccode_token()
{

}

#ifndef CODE_TOKEN_TEST
#define CODE_TOKEN_TEST 0//1
#endif

#if CODE_TOKEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
