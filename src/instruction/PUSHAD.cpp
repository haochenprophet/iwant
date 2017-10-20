#include "PUSHAD.h"
int CPUSHAD::my_init(void *p)
{
	this->name = "CPUSHAD";
	this->alias = "PUSHAD";
	return 0;
}

CPUSHAD::CPUSHAD()
{
	this->my_init();
}

CPUSHAD::~CPUSHAD()
{

}
