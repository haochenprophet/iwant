#include "VPMOVM2Q.h"
int CVPMOVM2Q::my_init(void *p)
{
	this->name = "CVPMOVM2Q";
	this->alias = "VPMOVM2Q";
	return 0;
}

CVPMOVM2Q::CVPMOVM2Q()
{
	this->my_init();
}

CVPMOVM2Q::~CVPMOVM2Q()
{

}
