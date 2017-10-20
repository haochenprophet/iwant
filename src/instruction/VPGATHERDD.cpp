#include "VPGATHERDD.h"
int CVPGATHERDD::my_init(void *p)
{
	this->name = "CVPGATHERDD";
	this->alias = "VPGATHERDD";
	return 0;
}

CVPGATHERDD::CVPGATHERDD()
{
	this->my_init();
}

CVPGATHERDD::~CVPGATHERDD()
{

}
