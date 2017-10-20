#include "KADDQ.h"
int CKADDQ::my_init(void *p)
{
	this->name = "CKADDQ";
	this->alias = "KADDQ";
	return 0;
}

CKADDQ::CKADDQ()
{
	this->my_init();
}

CKADDQ::~CKADDQ()
{

}
