#include "OUTSB.h"
int COUTSB::my_init(void *p)
{
	this->name = "COUTSB";
	this->alias = "OUTSB";
	return 0;
}

COUTSB::COUTSB()
{
	this->my_init();
}

COUTSB::~COUTSB()
{

}
