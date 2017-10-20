#include "PEXT.h"
int CPEXT::my_init(void *p)
{
	this->name = "CPEXT";
	this->alias = "PEXT";
	return 0;
}

CPEXT::CPEXT()
{
	this->my_init();
}

CPEXT::~CPEXT()
{

}
