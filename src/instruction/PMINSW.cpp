#include "PMINSW.h"
int CPMINSW::my_init(void *p)
{
	this->name = "CPMINSW";
	this->alias = "PMINSW";
	return 0;
}

CPMINSW::CPMINSW()
{
	this->my_init();
}

CPMINSW::~CPMINSW()
{

}
