#include "FLDENV.h"
int CFLDENV::my_init(void *p)
{
	this->name = "CFLDENV";
	this->alias = "FLDENV";
	return 0;
}

CFLDENV::CFLDENV()
{
	this->my_init();
}

CFLDENV::~CFLDENV()
{

}
