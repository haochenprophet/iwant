#include "MOVQ.h"
int CMOVQ::my_init(void *p)
{
	this->name = "CMOVQ";
	this->alias = "MOVQ";
	return 0;
}

CMOVQ::CMOVQ()
{
	this->my_init();
}

CMOVQ::~CMOVQ()
{

}
