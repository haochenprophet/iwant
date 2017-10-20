#include "CLD.h"
int CCLD::my_init(void *p)
{
	this->name = "CCLD";
	this->alias = "CLD";
	return 0;
}

CCLD::CCLD()
{
	this->my_init();
}

CCLD::~CCLD()
{

}
