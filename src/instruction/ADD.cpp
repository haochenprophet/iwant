#include "ADD.h"
int CADD::my_init(void *p)
{
	this->name = "CADD";
	this->alias = "ADD";
	return 0;
}

CADD::CADD()
{
	this->my_init();
}

CADD::~CADD()
{

}
