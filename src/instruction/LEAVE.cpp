#include "LEAVE.h"
int CLEAVE::my_init(void *p)
{
	this->name = "CLEAVE";
	this->alias = "LEAVE";
	return 0;
}

CLEAVE::CLEAVE()
{
	this->my_init();
}

CLEAVE::~CLEAVE()
{

}
