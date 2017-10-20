#include "FCOMIP.h"
int CFCOMIP::my_init(void *p)
{
	this->name = "CFCOMIP";
	this->alias = "FCOMIP";
	return 0;
}

CFCOMIP::CFCOMIP()
{
	this->my_init();
}

CFCOMIP::~CFCOMIP()
{

}
