#include "FNINIT.h"
int CFNINIT::my_init(void *p)
{
	this->name = "CFNINIT";
	this->alias = "FNINIT";
	return 0;
}

CFNINIT::CFNINIT()
{
	this->my_init();
}

CFNINIT::~CFNINIT()
{

}
