#include "VMOVDQU32.h"
int CVMOVDQU32::my_init(void *p)
{
	this->name = "CVMOVDQU32";
	this->alias = "VMOVDQU32";
	return 0;
}

CVMOVDQU32::CVMOVDQU32()
{
	this->my_init();
}

CVMOVDQU32::~CVMOVDQU32()
{

}
