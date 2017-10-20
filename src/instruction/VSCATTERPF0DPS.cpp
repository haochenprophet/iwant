#include "VSCATTERPF0DPS.h"
int CVSCATTERPF0DPS::my_init(void *p)
{
	this->name = "CVSCATTERPF0DPS";
	this->alias = "VSCATTERPF0DPS";
	return 0;
}

CVSCATTERPF0DPS::CVSCATTERPF0DPS()
{
	this->my_init();
}

CVSCATTERPF0DPS::~CVSCATTERPF0DPS()
{

}
