#include "ROUNDPS.h"
int CROUNDPS::my_init(void *p)
{
	this->name = "CROUNDPS";
	this->alias = "ROUNDPS";
	return 0;
}

CROUNDPS::CROUNDPS()
{
	this->my_init();
}

CROUNDPS::~CROUNDPS()
{

}
