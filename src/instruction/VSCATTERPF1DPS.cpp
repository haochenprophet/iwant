#include "VSCATTERPF1DPS.h"
int CVSCATTERPF1DPS::my_init(void *p)
{
	this->name = "CVSCATTERPF1DPS";
	this->alias = "VSCATTERPF1DPS";
	return 0;
}

CVSCATTERPF1DPS::CVSCATTERPF1DPS()
{
	this->my_init();
}

CVSCATTERPF1DPS::~CVSCATTERPF1DPS()
{

}
