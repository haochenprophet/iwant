#include "KSHIFTRQ.h"
int CKSHIFTRQ::my_init(void *p)
{
	this->name = "CKSHIFTRQ";
	this->alias = "KSHIFTRQ";
	return 0;
}

CKSHIFTRQ::CKSHIFTRQ()
{
	this->my_init();
}

CKSHIFTRQ::~CKSHIFTRQ()
{

}
