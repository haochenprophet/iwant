#include "CVTSD2SI.h"
int CCVTSD2SI::my_init(void *p)
{
	this->name = "CCVTSD2SI";
	this->alias = "CVTSD2SI";
	return 0;
}

CCVTSD2SI::CCVTSD2SI()
{
	this->my_init();
}

CCVTSD2SI::~CCVTSD2SI()
{

}
