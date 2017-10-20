#include "KUNPCKBW.h"
int CKUNPCKBW::my_init(void *p)
{
	this->name = "CKUNPCKBW";
	this->alias = "KUNPCKBW";
	return 0;
}

CKUNPCKBW::CKUNPCKBW()
{
	this->my_init();
}

CKUNPCKBW::~CKUNPCKBW()
{

}
