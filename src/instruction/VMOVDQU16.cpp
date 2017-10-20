#include "VMOVDQU16.h"
int CVMOVDQU16::my_init(void *p)
{
	this->name = "CVMOVDQU16";
	this->alias = "VMOVDQU16";
	return 0;
}

CVMOVDQU16::CVMOVDQU16()
{
	this->my_init();
}

CVMOVDQU16::~CVMOVDQU16()
{

}
