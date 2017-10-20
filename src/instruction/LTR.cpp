#include "LTR.h"
int CLTR::my_init(void *p)
{
	this->name = "CLTR";
	this->alias = "LTR";
	return 0;
}

CLTR::CLTR()
{
	this->my_init();
}

CLTR::~CLTR()
{

}
