#include "CVTTSS2SI.h"
int CCVTTSS2SI::my_init(void *p)
{
	this->name = "CCVTTSS2SI";
	this->alias = "CVTTSS2SI";
	return 0;
}

CCVTTSS2SI::CCVTTSS2SI()
{
	this->my_init();
}

CCVTTSS2SI::~CCVTTSS2SI()
{

}
