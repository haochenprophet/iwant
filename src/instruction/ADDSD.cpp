#include "ADDSD.h"
int CADDSD::my_init(void *p)
{
	this->name = "CADDSD";
	this->alias = "ADDSD";
	return 0;
}

CADDSD::CADDSD()
{
	this->my_init();
}

CADDSD::~CADDSD()
{

}
