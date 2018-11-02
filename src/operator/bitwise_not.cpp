#include "bitwise_not.h"
int Cbitwise_not::my_init(void *p)
{
	this->name = "Cbitwise_not";
	this->alias = "bitwise_not";
	this->symbol = "~";
	return 0;
}

Cbitwise_not::Cbitwise_not()
{
	this->my_init();
}

Cbitwise_not::~Cbitwise_not()
{

}
