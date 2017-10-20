#include "VMOVDQU8.h"
int CVMOVDQU8::my_init(void *p)
{
	this->name = "CVMOVDQU8";
	this->alias = "VMOVDQU8";
	return 0;
}

CVMOVDQU8::CVMOVDQU8()
{
	this->my_init();
}

CVMOVDQU8::~CVMOVDQU8()
{

}
