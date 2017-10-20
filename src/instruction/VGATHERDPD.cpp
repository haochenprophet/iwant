#include "VGATHERDPD.h"
int CVGATHERDPD::my_init(void *p)
{
	this->name = "CVGATHERDPD";
	this->alias = "VGATHERDPD";
	return 0;
}

CVGATHERDPD::CVGATHERDPD()
{
	this->my_init();
}

CVGATHERDPD::~CVGATHERDPD()
{

}
