#include "FUCOM.h"
int CFUCOM::my_init(void *p)
{
	this->name = "CFUCOM";
	this->alias = "FUCOM";
	return 0;
}

CFUCOM::CFUCOM()
{
	this->my_init();
}

CFUCOM::~CFUCOM()
{

}
