#include "VPSRLVW.h"
int CVPSRLVW::my_init(void *p)
{
	this->name = "CVPSRLVW";
	this->alias = "VPSRLVW";
	return 0;
}

CVPSRLVW::CVPSRLVW()
{
	this->my_init();
}

CVPSRLVW::~CVPSRLVW()
{

}
