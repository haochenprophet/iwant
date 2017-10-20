#include "MOVDQA.h"
int CMOVDQA::my_init(void *p)
{
	this->name = "CMOVDQA";
	this->alias = "MOVDQA";
	return 0;
}

CMOVDQA::CMOVDQA()
{
	this->my_init();
}

CMOVDQA::~CMOVDQA()
{

}
