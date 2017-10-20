#include "CVTSS2SI.h"
int CCVTSS2SI::my_init(void *p)
{
	this->name = "CCVTSS2SI";
	this->alias = "CVTSS2SI";
	return 0;
}

CCVTSS2SI::CCVTSS2SI()
{
	this->my_init();
}

CCVTSS2SI::~CCVTSS2SI()
{

}
