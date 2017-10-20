#include "KSHIFTLQ.h"
int CKSHIFTLQ::my_init(void *p)
{
	this->name = "CKSHIFTLQ";
	this->alias = "KSHIFTLQ";
	return 0;
}

CKSHIFTLQ::CKSHIFTLQ()
{
	this->my_init();
}

CKSHIFTLQ::~CKSHIFTLQ()
{

}
