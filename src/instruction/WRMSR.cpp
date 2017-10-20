#include "WRMSR.h"
int CWRMSR::my_init(void *p)
{
	this->name = "CWRMSR";
	this->alias = "WRMSR";
	return 0;
}

CWRMSR::CWRMSR()
{
	this->my_init();
}

CWRMSR::~CWRMSR()
{

}
