#include "LMSW.h"
int CLMSW::my_init(void *p)
{
	this->name = "CLMSW";
	this->alias = "LMSW";
	return 0;
}

CLMSW::CLMSW()
{
	this->my_init();
}

CLMSW::~CLMSW()
{

}
