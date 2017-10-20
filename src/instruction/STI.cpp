#include "STI.h"
int CSTI::my_init(void *p)
{
	this->name = "CSTI";
	this->alias = "STI";
	return 0;
}

CSTI::CSTI()
{
	this->my_init();
}

CSTI::~CSTI()
{

}
