#include "FSTENV.h"
int CFSTENV::my_init(void *p)
{
	this->name = "CFSTENV";
	this->alias = "FSTENV";
	return 0;
}

CFSTENV::CFSTENV()
{
	this->my_init();
}

CFSTENV::~CFSTENV()
{

}
