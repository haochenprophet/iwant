#include "PAUSE.h"
int CPAUSE::my_init(void *p)
{
	this->name = "CPAUSE";
	this->alias = "PAUSE";
	return 0;
}

CPAUSE::CPAUSE()
{
	this->my_init();
}

CPAUSE::~CPAUSE()
{

}
