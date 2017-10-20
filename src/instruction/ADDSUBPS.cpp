#include "ADDSUBPS.h"
int CADDSUBPS::my_init(void *p)
{
	this->name = "CADDSUBPS";
	this->alias = "ADDSUBPS";
	return 0;
}

CADDSUBPS::CADDSUBPS()
{
	this->my_init();
}

CADDSUBPS::~CADDSUBPS()
{

}
