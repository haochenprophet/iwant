#include "VREDUCEPS.h"
int CVREDUCEPS::my_init(void *p)
{
	this->name = "CVREDUCEPS";
	this->alias = "VREDUCEPS";
	return 0;
}

CVREDUCEPS::CVREDUCEPS()
{
	this->my_init();
}

CVREDUCEPS::~CVREDUCEPS()
{

}
