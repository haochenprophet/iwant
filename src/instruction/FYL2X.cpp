#include "FYL2X.h"
int CFYL2X::my_init(void *p)
{
	this->name = "CFYL2X";
	this->alias = "FYL2X";
	return 0;
}

CFYL2X::CFYL2X()
{
	this->my_init();
}

CFYL2X::~CFYL2X()
{

}
