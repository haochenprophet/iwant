#include "FST.h"
int CFST::my_init(void *p)
{
	this->name = "CFST";
	this->alias = "FST";
	return 0;
}

CFST::CFST()
{
	this->my_init();
}

CFST::~CFST()
{

}
