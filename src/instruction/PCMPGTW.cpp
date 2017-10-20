#include "PCMPGTW.h"
int CPCMPGTW::my_init(void *p)
{
	this->name = "CPCMPGTW";
	this->alias = "PCMPGTW";
	return 0;
}

CPCMPGTW::CPCMPGTW()
{
	this->my_init();
}

CPCMPGTW::~CPCMPGTW()
{

}
