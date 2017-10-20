#include "VRANGEPS.h"
int CVRANGEPS::my_init(void *p)
{
	this->name = "CVRANGEPS";
	this->alias = "VRANGEPS";
	return 0;
}

CVRANGEPS::CVRANGEPS()
{
	this->my_init();
}

CVRANGEPS::~CVRANGEPS()
{

}
