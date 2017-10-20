#include "XGETBV.h"
int CXGETBV::my_init(void *p)
{
	this->name = "CXGETBV";
	this->alias = "XGETBV";
	return 0;
}

CXGETBV::CXGETBV()
{
	this->my_init();
}

CXGETBV::~CXGETBV()
{

}
