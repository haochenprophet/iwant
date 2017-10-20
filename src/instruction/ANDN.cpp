#include "ANDN.h"
int CANDN::my_init(void *p)
{
	this->name = "CANDN";
	this->alias = "ANDN";
	return 0;
}

CANDN::CANDN()
{
	this->my_init();
}

CANDN::~CANDN()
{

}
