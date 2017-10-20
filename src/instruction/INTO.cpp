#include "INTO.h"
int CINTO::my_init(void *p)
{
	this->name = "CINTO";
	this->alias = "INTO";
	return 0;
}

CINTO::CINTO()
{
	this->my_init();
}

CINTO::~CINTO()
{

}
