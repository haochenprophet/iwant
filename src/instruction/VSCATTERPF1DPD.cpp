#include "VSCATTERPF1DPD.h"
int CVSCATTERPF1DPD::my_init(void *p)
{
	this->name = "CVSCATTERPF1DPD";
	this->alias = "VSCATTERPF1DPD";
	return 0;
}

CVSCATTERPF1DPD::CVSCATTERPF1DPD()
{
	this->my_init();
}

CVSCATTERPF1DPD::~CVSCATTERPF1DPD()
{

}
