#include "BLSR.h"
int CBLSR::my_init(void *p)
{
	this->name = "CBLSR";
	this->alias = "BLSR";
	return 0;
}

CBLSR::CBLSR()
{
	this->my_init();
}

CBLSR::~CBLSR()
{

}
