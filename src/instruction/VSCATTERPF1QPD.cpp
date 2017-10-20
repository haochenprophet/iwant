#include "VSCATTERPF1QPD.h"
int CVSCATTERPF1QPD::my_init(void *p)
{
	this->name = "CVSCATTERPF1QPD";
	this->alias = "VSCATTERPF1QPD";
	return 0;
}

CVSCATTERPF1QPD::CVSCATTERPF1QPD()
{
	this->my_init();
}

CVSCATTERPF1QPD::~CVSCATTERPF1QPD()
{

}
