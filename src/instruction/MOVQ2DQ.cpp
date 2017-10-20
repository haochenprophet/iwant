#include "MOVQ2DQ.h"
int CMOVQ2DQ::my_init(void *p)
{
	this->name = "CMOVQ2DQ";
	this->alias = "MOVQ2DQ";
	return 0;
}

CMOVQ2DQ::CMOVQ2DQ()
{
	this->my_init();
}

CMOVQ2DQ::~CMOVQ2DQ()
{

}
