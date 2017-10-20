#include "OUTSW.h"
int COUTSW::my_init(void *p)
{
	this->name = "COUTSW";
	this->alias = "OUTSW";
	return 0;
}

COUTSW::COUTSW()
{
	this->my_init();
}

COUTSW::~COUTSW()
{

}
