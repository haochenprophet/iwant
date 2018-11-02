#include "line_comment.h"
int Cline_comment::my_init(void *p)
{
	this->name = "Cline_comment";
	this->alias = "line_comment";
	this->symbol = "//";
	this->op_priority = 1;
	this->combination = Combination::R2L;
	return 0;
}

Cline_comment::Cline_comment()
{
	this->my_init();
}

Cline_comment::~Cline_comment()
{

}

#ifndef LINE_COMMENT_TEST
#define LINE_COMMENT_TEST 0//1
#endif

#if LINE_COMMENT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LINE_COMMENT_TEST\n\n";

	return 0;
}
#endif 