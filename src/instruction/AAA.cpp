#include "AAA.h"
int CAAA::my_init(void *p)
{
	this->name = "CAAA";
	this->alias = "AAA";
	return 0;
}

CAAA::CAAA()
{
	this->my_init();
}

CAAA::~CAAA()
{

}
