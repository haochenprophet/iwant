#include "BSF.h"
int CBSF::my_init(void *p)
{
	this->name = "CBSF";
	this->alias = "BSF";
	return 0;
}

CBSF::CBSF()
{
	this->my_init();
}

CBSF::~CBSF()
{

}
