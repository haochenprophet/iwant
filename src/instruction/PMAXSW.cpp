#include "PMAXSW.h"
int CPMAXSW::my_init(void *p)
{
	this->name = "CPMAXSW";
	this->alias = "PMAXSW";
	return 0;
}

CPMAXSW::CPMAXSW()
{
	this->my_init();
}

CPMAXSW::~CPMAXSW()
{

}
