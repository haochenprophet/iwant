#include "LAR.h"
int CLAR::my_init(void *p)
{
	this->name = "CLAR";
	this->alias = "LAR";
	return 0;
}

CLAR::CLAR()
{
	this->my_init();
}

CLAR::~CLAR()
{

}
