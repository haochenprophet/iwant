#include "FIMUL.h"
int CFIMUL::my_init(void *p)
{
	this->name = "CFIMUL";
	this->alias = "FIMUL";
	return 0;
}

CFIMUL::CFIMUL()
{
	this->my_init();
}

CFIMUL::~CFIMUL()
{

}
