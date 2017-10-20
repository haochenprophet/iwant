#include "LIDT.h"
int CLIDT::my_init(void *p)
{
	this->name = "CLIDT";
	this->alias = "LIDT";
	return 0;
}

CLIDT::CLIDT()
{
	this->my_init();
}

CLIDT::~CLIDT()
{

}
