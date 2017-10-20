#include "PSUBUSW.h"
int CPSUBUSW::my_init(void *p)
{
	this->name = "CPSUBUSW";
	this->alias = "PSUBUSW";
	return 0;
}

CPSUBUSW::CPSUBUSW()
{
	this->my_init();
}

CPSUBUSW::~CPSUBUSW()
{

}
