#include "VMOVDQU64.h"
int CVMOVDQU64::my_init(void *p)
{
	this->name = "CVMOVDQU64";
	this->alias = "VMOVDQU64";
	return 0;
}

CVMOVDQU64::CVMOVDQU64()
{
	this->my_init();
}

CVMOVDQU64::~CVMOVDQU64()
{

}
