#include "VPGATHERQQ.h"
int CVPGATHERQQ::my_init(void *p)
{
	this->name = "CVPGATHERQQ";
	this->alias = "VPGATHERQQ";
	return 0;
}

CVPGATHERQQ::CVPGATHERQQ()
{
	this->my_init();
}

CVPGATHERQQ::~CVPGATHERQQ()
{

}
