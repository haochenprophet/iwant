#include "VPMOVM2W.h"
int CVPMOVM2W::my_init(void *p)
{
	this->name = "CVPMOVM2W";
	this->alias = "VPMOVM2W";
	return 0;
}

CVPMOVM2W::CVPMOVM2W()
{
	this->my_init();
}

CVPMOVM2W::~CVPMOVM2W()
{

}
