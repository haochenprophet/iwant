#include "HSUBPS.h"
int CHSUBPS::my_init(void *p)
{
	this->name = "CHSUBPS";
	this->alias = "HSUBPS";
	return 0;
}

CHSUBPS::CHSUBPS()
{
	this->my_init();
}

CHSUBPS::~CHSUBPS()
{

}
