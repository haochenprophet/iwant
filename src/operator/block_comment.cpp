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
