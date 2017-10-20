#include "POPA.h"
int CPOPA::my_init(void *p)
{
	this->name = "CPOPA";
	this->alias = "POPA";
	return 0;
}

CPOPA::CPOPA()
{
	this->my_init();
}

CPOPA::~CPOPA()
{

}
