#include "RCR.h"
int CRCR::my_init(void *p)
{
	this->name = "CRCR";
	this->alias = "RCR";
	return 0;
}

CRCR::CRCR()
{
	this->my_init();
}

CRCR::~CRCR()
{

}
