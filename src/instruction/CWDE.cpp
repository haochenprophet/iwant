#include "CWDE.h"
int CCWDE::my_init(void *p)
{
	this->name = "CCWDE";
	this->alias = "CWDE";
	return 0;
}

CCWDE::CCWDE()
{
	this->my_init();
}

CCWDE::~CCWDE()
{

}
