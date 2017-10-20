#include "VPMOVSQW.h"
int CVPMOVSQW::my_init(void *p)
{
	this->name = "CVPMOVSQW";
	this->alias = "VPMOVSQW";
	return 0;
}

CVPMOVSQW::CVPMOVSQW()
{
	this->my_init();
}

CVPMOVSQW::~CVPMOVSQW()
{

}
