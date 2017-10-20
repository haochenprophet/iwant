#include "VBROADCAST.h"
int CVBROADCAST::my_init(void *p)
{
	this->name = "CVBROADCAST";
	this->alias = "VBROADCAST";
	return 0;
}

CVBROADCAST::CVBROADCAST()
{
	this->my_init();
}

CVBROADCAST::~CVBROADCAST()
{

}
