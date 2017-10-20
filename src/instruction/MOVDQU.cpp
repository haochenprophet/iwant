#include "MOVDQU.h"
int CMOVDQU::my_init(void *p)
{
	this->name = "CMOVDQU";
	this->alias = "MOVDQU";
	return 0;
}

CMOVDQU::CMOVDQU()
{
	this->my_init();
}

CMOVDQU::~CMOVDQU()
{

}
