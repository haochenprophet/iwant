#include "MOVHLPS.h"
int CMOVHLPS::my_init(void *p)
{
	this->name = "CMOVHLPS";
	this->alias = "MOVHLPS";
	return 0;
}

CMOVHLPS::CMOVHLPS()
{
	this->my_init();
}

CMOVHLPS::~CMOVHLPS()
{

}
