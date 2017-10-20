#include "VPERMQ.h"
int CVPERMQ::my_init(void *p)
{
	this->name = "CVPERMQ";
	this->alias = "VPERMQ";
	return 0;
}

CVPERMQ::CVPERMQ()
{
	this->my_init();
}

CVPERMQ::~CVPERMQ()
{

}
