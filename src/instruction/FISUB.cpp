#include "FISUB.h"
int CFISUB::my_init(void *p)
{
	this->name = "CFISUB";
	this->alias = "FISUB";
	return 0;
}

CFISUB::CFISUB()
{
	this->my_init();
}

CFISUB::~CFISUB()
{

}
