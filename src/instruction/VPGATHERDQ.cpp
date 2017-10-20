#include "VPGATHERDQ.h"
int CVPGATHERDQ::my_init(void *p)
{
	this->name = "CVPGATHERDQ";
	this->alias = "VPGATHERDQ";
	return 0;
}

CVPGATHERDQ::CVPGATHERDQ()
{
	this->my_init();
}

CVPGATHERDQ::~CVPGATHERDQ()
{

}
