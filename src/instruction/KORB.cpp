#include "KORB.h"
int CKORB::my_init(void *p)
{
	this->name = "CKORB";
	this->alias = "KORB";
	return 0;
}

CKORB::CKORB()
{
	this->my_init();
}

CKORB::~CKORB()
{

}
