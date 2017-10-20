#include "VPMOVM2B.h"
int CVPMOVM2B::my_init(void *p)
{
	this->name = "CVPMOVM2B";
	this->alias = "VPMOVM2B";
	return 0;
}

CVPMOVM2B::CVPMOVM2B()
{
	this->my_init();
}

CVPMOVM2B::~CVPMOVM2B()
{

}
