#include "MOVNTDQ.h"
int CMOVNTDQ::my_init(void *p)
{
	this->name = "CMOVNTDQ";
	this->alias = "MOVNTDQ";
	return 0;
}

CMOVNTDQ::CMOVNTDQ()
{
	this->my_init();
}

CMOVNTDQ::~CMOVNTDQ()
{

}
