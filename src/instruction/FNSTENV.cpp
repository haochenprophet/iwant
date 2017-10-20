#include "FNSTENV.h"
int CFNSTENV::my_init(void *p)
{
	this->name = "CFNSTENV";
	this->alias = "FNSTENV";
	return 0;
}

CFNSTENV::CFNSTENV()
{
	this->my_init();
}

CFNSTENV::~CFNSTENV()
{

}
