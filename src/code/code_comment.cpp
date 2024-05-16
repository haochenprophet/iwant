#include "code_comment.h"
int Ccode_comment::my_init(void *p)
{
	this->name = "Ccode_comment";
	this->alias = "code_comment";
	return 0;
}

Ccode_comment::Ccode_comment()
{
	this->my_init();
}

Ccode_comment::~Ccode_comment()
{

}

#ifndef CODE_COMMENT_TEST
#define CODE_COMMENT_TEST 0//1
#endif

#if CODE_COMMENT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
