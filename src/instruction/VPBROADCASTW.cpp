#include "VPBROADCASTW.h"
int CVPBROADCASTW::my_init(void *p)
{
	this->name = "CVPBROADCASTW";
	this->alias = "VPBROADCASTW";
	return 0;
}

CVPBROADCASTW::CVPBROADCASTW()
{
	this->my_init();
}

CVPBROADCASTW::~CVPBROADCASTW()
{

}
