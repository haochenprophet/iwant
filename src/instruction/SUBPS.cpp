#include "SUBPS.h"
int CSUBPS::my_init(void *p)
{
	this->name = "CSUBPS";
	this->alias = "SUBPS";
	return 0;
}

CSUBPS::CSUBPS()
{
	this->my_init();
}

CSUBPS::~CSUBPS()
{

}
