#include "AESIMC.h"
int CAESIMC::my_init(void *p)
{
	this->name = "CAESIMC";
	this->alias = "AESIMC";
	return 0;
}

CAESIMC::CAESIMC()
{
	this->my_init();
}

CAESIMC::~CAESIMC()
{

}
