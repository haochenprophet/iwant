#include "ROL.h"
int CROL::my_init(void *p)
{
	this->name = "CROL";
	this->alias = "ROL";
	return 0;
}

CROL::CROL()
{
	this->my_init();
}

CROL::~CROL()
{

}
