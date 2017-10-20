#include "REP.h"
int CREP::my_init(void *p)
{
	this->name = "CREP";
	this->alias = "REP";
	return 0;
}

CREP::CREP()
{
	this->my_init();
}

CREP::~CREP()
{

}
