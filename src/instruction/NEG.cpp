#include "NEG.h"
int CNEG::my_init(void *p)
{
	this->name = "CNEG";
	this->alias = "NEG";
	return 0;
}

CNEG::CNEG()
{
	this->my_init();
}

CNEG::~CNEG()
{

}
