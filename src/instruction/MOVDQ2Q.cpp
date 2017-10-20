#include "MOVDQ2Q.h"
int CMOVDQ2Q::my_init(void *p)
{
	this->name = "CMOVDQ2Q";
	this->alias = "MOVDQ2Q";
	return 0;
}

CMOVDQ2Q::CMOVDQ2Q()
{
	this->my_init();
}

CMOVDQ2Q::~CMOVDQ2Q()
{

}
