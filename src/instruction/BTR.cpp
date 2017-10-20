#include "BTR.h"
int CBTR::my_init(void *p)
{
	this->name = "CBTR";
	this->alias = "BTR";
	return 0;
}

CBTR::CBTR()
{
	this->my_init();
}

CBTR::~CBTR()
{

}
