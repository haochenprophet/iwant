#include "PANDN.h"
int CPANDN::my_init(void *p)
{
	this->name = "CPANDN";
	this->alias = "PANDN";
	return 0;
}

CPANDN::CPANDN()
{
	this->my_init();
}

CPANDN::~CPANDN()
{

}
