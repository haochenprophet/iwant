#include "VPERMI2PD.h"
int CVPERMI2PD::my_init(void *p)
{
	this->name = "CVPERMI2PD";
	this->alias = "VPERMI2PD";
	return 0;
}

CVPERMI2PD::CVPERMI2PD()
{
	this->my_init();
}

CVPERMI2PD::~CVPERMI2PD()
{

}
