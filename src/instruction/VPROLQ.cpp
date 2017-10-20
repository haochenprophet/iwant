#include "VPROLQ.h"
int CVPROLQ::my_init(void *p)
{
	this->name = "CVPROLQ";
	this->alias = "VPROLQ";
	return 0;
}

CVPROLQ::CVPROLQ()
{
	this->my_init();
}

CVPROLQ::~CVPROLQ()
{

}
