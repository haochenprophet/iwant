#include "VCVTUDQ2PD.h"
int CVCVTUDQ2PD::my_init(void *p)
{
	this->name = "CVCVTUDQ2PD";
	this->alias = "VCVTUDQ2PD";
	return 0;
}

CVCVTUDQ2PD::CVCVTUDQ2PD()
{
	this->my_init();
}

CVCVTUDQ2PD::~CVCVTUDQ2PD()
{

}
