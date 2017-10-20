#include "VMOVDQA32.h"
int CVMOVDQA32::my_init(void *p)
{
	this->name = "CVMOVDQA32";
	this->alias = "VMOVDQA32";
	return 0;
}

CVMOVDQA32::CVMOVDQA32()
{
	this->my_init();
}

CVMOVDQA32::~CVMOVDQA32()
{

}
