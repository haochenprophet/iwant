#include "MOVSD.h"
int CMOVSD::my_init(void *p)
{
	this->name = "CMOVSD";
	this->alias = "MOVSD";
	return 0;
}

CMOVSD::CMOVSD()
{
	this->my_init();
}

CMOVSD::~CMOVSD()
{

}
