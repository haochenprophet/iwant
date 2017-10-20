#include "CMPSW.h"
int CCMPSW::my_init(void *p)
{
	this->name = "CCMPSW";
	this->alias = "CMPSW";
	return 0;
}

CCMPSW::CCMPSW()
{
	this->my_init();
}

CCMPSW::~CCMPSW()
{

}
