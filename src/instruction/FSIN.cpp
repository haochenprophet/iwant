#include "FSIN.h"
int CFSIN::my_init(void *p)
{
	this->name = "CFSIN";
	this->alias = "FSIN";
	return 0;
}

CFSIN::CFSIN()
{
	this->my_init();
}

CFSIN::~CFSIN()
{

}
