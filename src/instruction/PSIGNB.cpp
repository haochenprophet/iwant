#include "PSIGNB.h"
int CPSIGNB::my_init(void *p)
{
	this->name = "CPSIGNB";
	this->alias = "PSIGNB";
	return 0;
}

CPSIGNB::CPSIGNB()
{
	this->my_init();
}

CPSIGNB::~CPSIGNB()
{

}
