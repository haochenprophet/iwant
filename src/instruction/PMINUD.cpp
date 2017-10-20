#include "PMINUD.h"
int CPMINUD::my_init(void *p)
{
	this->name = "CPMINUD";
	this->alias = "PMINUD";
	return 0;
}

CPMINUD::CPMINUD()
{
	this->my_init();
}

CPMINUD::~CPMINUD()
{

}
