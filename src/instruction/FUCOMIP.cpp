#include "FUCOMIP.h"
int CFUCOMIP::my_init(void *p)
{
	this->name = "CFUCOMIP";
	this->alias = "FUCOMIP";
	return 0;
}

CFUCOMIP::CFUCOMIP()
{
	this->my_init();
}

CFUCOMIP::~CFUCOMIP()
{

}
