#include "FCOM.h"
int CFCOM::my_init(void *p)
{
	this->name = "CFCOM";
	this->alias = "FCOM";
	return 0;
}

CFCOM::CFCOM()
{
	this->my_init();
}

CFCOM::~CFCOM()
{

}
