#include "MOVBE.h"
int CMOVBE::my_init(void *p)
{
	this->name = "CMOVBE";
	this->alias = "MOVBE";
	return 0;
}

CMOVBE::CMOVBE()
{
	this->my_init();
}

CMOVBE::~CMOVBE()
{

}
