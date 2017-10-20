#include "VEXPANDPS.h"
int CVEXPANDPS::my_init(void *p)
{
	this->name = "CVEXPANDPS";
	this->alias = "VEXPANDPS";
	return 0;
}

CVEXPANDPS::CVEXPANDPS()
{
	this->my_init();
}

CVEXPANDPS::~CVEXPANDPS()
{

}
