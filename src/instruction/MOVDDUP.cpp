#include "MOVDDUP.h"
int CMOVDDUP::my_init(void *p)
{
	this->name = "CMOVDDUP";
	this->alias = "MOVDDUP";
	return 0;
}

CMOVDDUP::CMOVDDUP()
{
	this->my_init();
}

CMOVDDUP::~CMOVDDUP()
{

}
