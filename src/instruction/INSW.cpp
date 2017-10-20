#include "INSW.h"
int CINSW::my_init(void *p)
{
	this->name = "CINSW";
	this->alias = "INSW";
	return 0;
}

CINSW::CINSW()
{
	this->my_init();
}

CINSW::~CINSW()
{

}
