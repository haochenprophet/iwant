#include "VSCATTERPF0DPD.h"
int CVSCATTERPF0DPD::my_init(void *p)
{
	this->name = "CVSCATTERPF0DPD";
	this->alias = "VSCATTERPF0DPD";
	return 0;
}

CVSCATTERPF0DPD::CVSCATTERPF0DPD()
{
	this->my_init();
}

CVSCATTERPF0DPD::~CVSCATTERPF0DPD()
{

}
