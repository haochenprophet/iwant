#include "POPFD.h"
int CPOPFD::my_init(void *p)
{
	this->name = "CPOPFD";
	this->alias = "POPFD";
	return 0;
}

CPOPFD::CPOPFD()
{
	this->my_init();
}

CPOPFD::~CPOPFD()
{

}
