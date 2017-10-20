#include "PMULLW.h"
int CPMULLW::my_init(void *p)
{
	this->name = "CPMULLW";
	this->alias = "PMULLW";
	return 0;
}

CPMULLW::CPMULLW()
{
	this->my_init();
}

CPMULLW::~CPMULLW()
{

}
