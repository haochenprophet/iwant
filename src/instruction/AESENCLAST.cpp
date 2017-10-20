#include "AESENCLAST.h"
int CAESENCLAST::my_init(void *p)
{
	this->name = "CAESENCLAST";
	this->alias = "AESENCLAST";
	return 0;
}

CAESENCLAST::CAESENCLAST()
{
	this->my_init();
}

CAESENCLAST::~CAESENCLAST()
{

}
