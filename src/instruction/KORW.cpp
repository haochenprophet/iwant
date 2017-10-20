#include "KORW.h"
int CKORW::my_init(void *p)
{
	this->name = "CKORW";
	this->alias = "KORW";
	return 0;
}

CKORW::CKORW()
{
	this->my_init();
}

CKORW::~CKORW()
{

}
