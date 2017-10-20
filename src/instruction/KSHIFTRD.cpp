#include "KSHIFTRD.h"
int CKSHIFTRD::my_init(void *p)
{
	this->name = "CKSHIFTRD";
	this->alias = "KSHIFTRD";
	return 0;
}

CKSHIFTRD::CKSHIFTRD()
{
	this->my_init();
}

CKSHIFTRD::~CKSHIFTRD()
{

}
