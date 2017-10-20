#include "DIV.h"
int CDIV::my_init(void *p)
{
	this->name = "CDIV";
	this->alias = "DIV";
	return 0;
}

CDIV::CDIV()
{
	this->my_init();
}

CDIV::~CDIV()
{

}
