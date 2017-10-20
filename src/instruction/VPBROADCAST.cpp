#include "VPBROADCAST.h"
int CVPBROADCAST::my_init(void *p)
{
	this->name = "CVPBROADCAST";
	this->alias = "VPBROADCAST";
	return 0;
}

CVPBROADCAST::CVPBROADCAST()
{
	this->my_init();
}

CVPBROADCAST::~CVPBROADCAST()
{

}
