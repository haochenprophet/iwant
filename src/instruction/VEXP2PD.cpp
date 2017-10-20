#include "VEXP2PD.h"
int CVEXP2PD::my_init(void *p)
{
	this->name = "CVEXP2PD";
	this->alias = "VEXP2PD";
	return 0;
}

CVEXP2PD::CVEXP2PD()
{
	this->my_init();
}

CVEXP2PD::~CVEXP2PD()
{

}
