#include "PSUBD.h"
int CPSUBD::my_init(void *p)
{
	this->name = "CPSUBD";
	this->alias = "PSUBD";
	return 0;
}

CPSUBD::CPSUBD()
{
	this->my_init();
}

CPSUBD::~CPSUBD()
{

}
