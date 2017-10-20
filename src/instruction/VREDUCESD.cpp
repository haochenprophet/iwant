#include "VREDUCESD.h"
int CVREDUCESD::my_init(void *p)
{
	this->name = "CVREDUCESD";
	this->alias = "VREDUCESD";
	return 0;
}

CVREDUCESD::CVREDUCESD()
{
	this->my_init();
}

CVREDUCESD::~CVREDUCESD()
{

}
