#include "VPBROADCASTM.h"
int CVPBROADCASTM::my_init(void *p)
{
	this->name = "CVPBROADCASTM";
	this->alias = "VPBROADCASTM";
	return 0;
}

CVPBROADCASTM::CVPBROADCASTM()
{
	this->my_init();
}

CVPBROADCASTM::~CVPBROADCASTM()
{

}
