#include "block_comment.h"
int Cblock_comment::my_init(void *p)
{
	this->name = "Cblock_comment";
	this->alias = "block_comment";
	this->symbol = "/*...*/";
	this->op_priority = 1;
	this->combination = Combination::R2L;
	return 0;
}

Cblock_comment::Cblock_comment()
{
	this->my_init();
}

Cblock_comment::~Cblock_comment()
{

}

#ifndef BLOCK_COMMENT_TEST
#define BLOCK_COMMENT_TEST 0//1
#endif

#if BLOCK_COMMENT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BLOCK_COMMENT_TEST\n\n";

	return 0;
}
#endif 