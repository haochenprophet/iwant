#include "FRNDINT.h"
int CFRNDINT::my_init(void *p)
{
	this->name = "CFRNDINT";
	this->alias = "FRNDINT";
	return 0;
}

CFRNDINT::CFRNDINT()
{
	this->my_init();
}

CFRNDINT::~CFRNDINT()
{

}
