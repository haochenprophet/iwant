#include "RET.h"
int CRET::my_init(void *p)
{
	this->name = "CRET";
	this->alias = "RET";
	return 0;
}

CRET::CRET()
{
	this->my_init();
}

CRET::~CRET()
{

}
