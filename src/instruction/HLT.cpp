#include "HLT.h"
int CHLT::my_init(void *p)
{
	this->name = "CHLT";
	this->alias = "HLT";
	return 0;
}

CHLT::CHLT()
{
	this->my_init();
}

CHLT::~CHLT()
{

}
