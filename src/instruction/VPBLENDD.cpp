#include "VPBLENDD.h"
int CVPBLENDD::my_init(void *p)
{
	this->name = "CVPBLENDD";
	this->alias = "VPBLENDD";
	return 0;
}

CVPBLENDD::CVPBLENDD()
{
	this->my_init();
}

CVPBLENDD::~CVPBLENDD()
{

}
