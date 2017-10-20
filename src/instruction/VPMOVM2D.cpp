#include "VPMOVM2D.h"
int CVPMOVM2D::my_init(void *p)
{
	this->name = "CVPMOVM2D";
	this->alias = "VPMOVM2D";
	return 0;
}

CVPMOVM2D::CVPMOVM2D()
{
	this->my_init();
}

CVPMOVM2D::~CVPMOVM2D()
{

}
