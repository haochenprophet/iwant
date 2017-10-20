#include "KSHIFTLD.h"
int CKSHIFTLD::my_init(void *p)
{
	this->name = "CKSHIFTLD";
	this->alias = "KSHIFTLD";
	return 0;
}

CKSHIFTLD::CKSHIFTLD()
{
	this->my_init();
}

CKSHIFTLD::~CKSHIFTLD()
{

}
