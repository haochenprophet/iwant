#include "BZHI.h"
int CBZHI::my_init(void *p)
{
	this->name = "CBZHI";
	this->alias = "BZHI";
	return 0;
}

CBZHI::CBZHI()
{
	this->my_init();
}

CBZHI::~CBZHI()
{

}
