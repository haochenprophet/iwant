#include "KADDW.h"
int CKADDW::my_init(void *p)
{
	this->name = "CKADDW";
	this->alias = "KADDW";
	return 0;
}

CKADDW::CKADDW()
{
	this->my_init();
}

CKADDW::~CKADDW()
{

}
