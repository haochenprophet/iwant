#include "PADDUSW.h"
int CPADDUSW::my_init(void *p)
{
	this->name = "CPADDUSW";
	this->alias = "PADDUSW";
	return 0;
}

CPADDUSW::CPADDUSW()
{
	this->my_init();
}

CPADDUSW::~CPADDUSW()
{

}
