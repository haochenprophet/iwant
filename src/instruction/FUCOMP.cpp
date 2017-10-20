#include "FUCOMP.h"
int CFUCOMP::my_init(void *p)
{
	this->name = "CFUCOMP";
	this->alias = "FUCOMP";
	return 0;
}

CFUCOMP::CFUCOMP()
{
	this->my_init();
}

CFUCOMP::~CFUCOMP()
{

}
