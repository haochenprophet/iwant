#include "KSHIFTLB.h"
int CKSHIFTLB::my_init(void *p)
{
	this->name = "CKSHIFTLB";
	this->alias = "KSHIFTLB";
	return 0;
}

CKSHIFTLB::CKSHIFTLB()
{
	this->my_init();
}

CKSHIFTLB::~CKSHIFTLB()
{

}
