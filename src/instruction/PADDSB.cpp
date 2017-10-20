#include "PADDSB.h"
int CPADDSB::my_init(void *p)
{
	this->name = "CPADDSB";
	this->alias = "PADDSB";
	return 0;
}

CPADDSB::CPADDSB()
{
	this->my_init();
}

CPADDSB::~CPADDSB()
{

}
