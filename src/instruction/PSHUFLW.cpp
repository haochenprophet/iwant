#include "PSHUFLW.h"
int CPSHUFLW::my_init(void *p)
{
	this->name = "CPSHUFLW";
	this->alias = "PSHUFLW";
	return 0;
}

CPSHUFLW::CPSHUFLW()
{
	this->my_init();
}

CPSHUFLW::~CPSHUFLW()
{

}
