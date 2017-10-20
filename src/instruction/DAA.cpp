#include "DAA.h"
int CDAA::my_init(void *p)
{
	this->name = "CDAA";
	this->alias = "DAA";
	return 0;
}

CDAA::CDAA()
{
	this->my_init();
}

CDAA::~CDAA()
{

}
