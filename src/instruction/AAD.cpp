#include "AAD.h"
int CAAD::my_init(void *p)
{
	this->name = "CAAD";
	this->alias = "AAD";
	return 0;
}

CAAD::CAAD()
{
	this->my_init();
}

CAAD::~CAAD()
{

}
