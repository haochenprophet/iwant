#include "KSHIFTRB.h"
int CKSHIFTRB::my_init(void *p)
{
	this->name = "CKSHIFTRB";
	this->alias = "KSHIFTRB";
	return 0;
}

CKSHIFTRB::CKSHIFTRB()
{
	this->my_init();
}

CKSHIFTRB::~CKSHIFTRB()
{

}
