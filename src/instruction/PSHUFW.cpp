#include "PSHUFW.h"
int CPSHUFW::my_init(void *p)
{
	this->name = "CPSHUFW";
	this->alias = "PSHUFW";
	return 0;
}

CPSHUFW::CPSHUFW()
{
	this->my_init();
}

CPSHUFW::~CPSHUFW()
{

}
