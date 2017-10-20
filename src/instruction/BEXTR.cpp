#include "BEXTR.h"
int CBEXTR::my_init(void *p)
{
	this->name = "CBEXTR";
	this->alias = "BEXTR";
	return 0;
}

CBEXTR::CBEXTR()
{
	this->my_init();
}

CBEXTR::~CBEXTR()
{

}
