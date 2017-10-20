#include "VPSCATTERDQ.h"
int CVPSCATTERDQ::my_init(void *p)
{
	this->name = "CVPSCATTERDQ";
	this->alias = "VPSCATTERDQ";
	return 0;
}

CVPSCATTERDQ::CVPSCATTERDQ()
{
	this->my_init();
}

CVPSCATTERDQ::~CVPSCATTERDQ()
{

}
