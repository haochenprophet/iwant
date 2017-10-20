#include "AESDEC.h"
int CAESDEC::my_init(void *p)
{
	this->name = "CAESDEC";
	this->alias = "AESDEC";
	return 0;
}

CAESDEC::CAESDEC()
{
	this->my_init();
}

CAESDEC::~CAESDEC()
{

}
