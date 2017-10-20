#include "RSM.h"
int CRSM::my_init(void *p)
{
	this->name = "CRSM";
	this->alias = "RSM";
	return 0;
}

CRSM::CRSM()
{
	this->my_init();
}

CRSM::~CRSM()
{

}
