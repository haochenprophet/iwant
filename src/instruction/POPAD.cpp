#include "POPAD.h"
int CPOPAD::my_init(void *p)
{
	this->name = "CPOPAD";
	this->alias = "POPAD";
	return 0;
}

CPOPAD::CPOPAD()
{
	this->my_init();
}

CPOPAD::~CPOPAD()
{

}
