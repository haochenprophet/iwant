#include "VRANGEPD.h"
int CVRANGEPD::my_init(void *p)
{
	this->name = "CVRANGEPD";
	this->alias = "VRANGEPD";
	return 0;
}

CVRANGEPD::CVRANGEPD()
{
	this->my_init();
}

CVRANGEPD::~CVRANGEPD()
{

}
