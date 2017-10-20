#include "VPBROADCASTD.h"
int CVPBROADCASTD::my_init(void *p)
{
	this->name = "CVPBROADCASTD";
	this->alias = "VPBROADCASTD";
	return 0;
}

CVPBROADCASTD::CVPBROADCASTD()
{
	this->my_init();
}

CVPBROADCASTD::~CVPBROADCASTD()
{

}
