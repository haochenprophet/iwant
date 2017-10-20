#include "POPF.h"
int CPOPF::my_init(void *p)
{
	this->name = "CPOPF";
	this->alias = "POPF";
	return 0;
}

CPOPF::CPOPF()
{
	this->my_init();
}

CPOPF::~CPOPF()
{

}
