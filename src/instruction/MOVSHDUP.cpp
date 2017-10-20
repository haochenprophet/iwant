#include "MOVSHDUP.h"
int CMOVSHDUP::my_init(void *p)
{
	this->name = "CMOVSHDUP";
	this->alias = "MOVSHDUP";
	return 0;
}

CMOVSHDUP::CMOVSHDUP()
{
	this->my_init();
}

CMOVSHDUP::~CMOVSHDUP()
{

}
