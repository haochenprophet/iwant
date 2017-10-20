#include "MOV.h"
int CMOV::my_init(void *p)
{
	this->name = "CMOV";
	this->alias = "MOV";
	return 0;
}

CMOV::CMOV()
{
	this->my_init();
}

CMOV::~CMOV()
{

}
