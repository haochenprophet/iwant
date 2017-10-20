#include "VPBROADCASTB.h"
int CVPBROADCASTB::my_init(void *p)
{
	this->name = "CVPBROADCASTB";
	this->alias = "VPBROADCASTB";
	return 0;
}

CVPBROADCASTB::CVPBROADCASTB()
{
	this->my_init();
}

CVPBROADCASTB::~CVPBROADCASTB()
{

}
