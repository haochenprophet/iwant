#include "VCOMPRESSPS.h"
int CVCOMPRESSPS::my_init(void *p)
{
	this->name = "CVCOMPRESSPS";
	this->alias = "VCOMPRESSPS";
	return 0;
}

CVCOMPRESSPS::CVCOMPRESSPS()
{
	this->my_init();
}

CVCOMPRESSPS::~CVCOMPRESSPS()
{

}
