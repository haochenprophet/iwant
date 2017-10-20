#include "PACKUSDW.h"
int CPACKUSDW::my_init(void *p)
{
	this->name = "CPACKUSDW";
	this->alias = "PACKUSDW";
	return 0;
}

CPACKUSDW::CPACKUSDW()
{
	this->my_init();
}

CPACKUSDW::~CPACKUSDW()
{

}
