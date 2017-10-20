#include "FDIVR.h"
int CFDIVR::my_init(void *p)
{
	this->name = "CFDIVR";
	this->alias = "FDIVR";
	return 0;
}

CFDIVR::CFDIVR()
{
	this->my_init();
}

CFDIVR::~CFDIVR()
{

}
