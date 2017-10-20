#include "VMOVDQA64.h"
int CVMOVDQA64::my_init(void *p)
{
	this->name = "CVMOVDQA64";
	this->alias = "VMOVDQA64";
	return 0;
}

CVMOVDQA64::CVMOVDQA64()
{
	this->my_init();
}

CVMOVDQA64::~CVMOVDQA64()
{

}
