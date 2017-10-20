#include "PSRLW.h"
int CPSRLW::my_init(void *p)
{
	this->name = "CPSRLW";
	this->alias = "PSRLW";
	return 0;
}

CPSRLW::CPSRLW()
{
	this->my_init();
}

CPSRLW::~CPSRLW()
{

}
