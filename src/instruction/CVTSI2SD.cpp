#include "CVTSI2SD.h"
int CCVTSI2SD::my_init(void *p)
{
	this->name = "CCVTSI2SD";
	this->alias = "CVTSI2SD";
	return 0;
}

CCVTSI2SD::CCVTSI2SD()
{
	this->my_init();
}

CCVTSI2SD::~CCVTSI2SD()
{

}
