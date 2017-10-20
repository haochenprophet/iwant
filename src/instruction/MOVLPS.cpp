#include "MOVLPS.h"
int CMOVLPS::my_init(void *p)
{
	this->name = "CMOVLPS";
	this->alias = "MOVLPS";
	return 0;
}

CMOVLPS::CMOVLPS()
{
	this->my_init();
}

CMOVLPS::~CMOVLPS()
{

}
