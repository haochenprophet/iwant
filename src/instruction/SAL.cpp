#include "SAL.h"
int CSAL::my_init(void *p)
{
	this->name = "CSAL";
	this->alias = "SAL";
	return 0;
}

CSAL::CSAL()
{
	this->my_init();
}

CSAL::~CSAL()
{

}
