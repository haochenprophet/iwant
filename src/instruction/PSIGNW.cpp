#include "PSIGNW.h"
int CPSIGNW::my_init(void *p)
{
	this->name = "CPSIGNW";
	this->alias = "PSIGNW";
	return 0;
}

CPSIGNW::CPSIGNW()
{
	this->my_init();
}

CPSIGNW::~CPSIGNW()
{

}
