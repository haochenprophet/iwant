#include "VSHUFF32x4.h"
int CVSHUFF32x4::my_init(void *p)
{
	this->name = "CVSHUFF32x4";
	this->alias = "VSHUFF32x4";
	return 0;
}

CVSHUFF32x4::CVSHUFF32x4()
{
	this->my_init();
}

CVSHUFF32x4::~CVSHUFF32x4()
{

}
