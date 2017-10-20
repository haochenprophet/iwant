#include "MOVNTQ.h"
int CMOVNTQ::my_init(void *p)
{
	this->name = "CMOVNTQ";
	this->alias = "MOVNTQ";
	return 0;
}

CMOVNTQ::CMOVNTQ()
{
	this->my_init();
}

CMOVNTQ::~CMOVNTQ()
{

}
