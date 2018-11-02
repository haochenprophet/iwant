#include "block_comment.h"
int Cblock_comment::my_init(void *p)
{
	this->name = "Cblock_comment";
	this->alias = "block_comment";
	this->symbol = "/*...*/";
	return 0;
}

Cblock_comment::Cblock_comment()
{
	this->my_init();
}

Cblock_comment::~Cblock_comment()
{

}
