#include "VPBROADCASTQ.h"
int CVPBROADCASTQ::my_init(void *p)
{
	this->name = "CVPBROADCASTQ";
	this->alias = "VPBROADCASTQ";
	return 0;
}

CVPBROADCASTQ::CVPBROADCASTQ()
{
	this->my_init();
}

CVPBROADCASTQ::~CVPBROADCASTQ()
{

}
