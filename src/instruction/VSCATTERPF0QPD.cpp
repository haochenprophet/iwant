#include "VSCATTERPF0QPD.h"
int CVSCATTERPF0QPD::my_init(void *p)
{
	this->name = "CVSCATTERPF0QPD";
	this->alias = "VSCATTERPF0QPD";
	return 0;
}

CVSCATTERPF0QPD::CVSCATTERPF0QPD()
{
	this->my_init();
}

CVSCATTERPF0QPD::~CVSCATTERPF0QPD()
{

}
