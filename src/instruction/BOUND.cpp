#include "BOUND.h"
int CBOUND::my_init(void *p)
{
	this->name = "CBOUND";
	this->alias = "BOUND";
	return 0;
}

CBOUND::CBOUND()
{
	this->my_init();
}

CBOUND::~CBOUND()
{

}
