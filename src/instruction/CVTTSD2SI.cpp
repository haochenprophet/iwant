#include "CVTTSD2SI.h"
int CCVTTSD2SI::my_init(void *p)
{
	this->name = "CCVTTSD2SI";
	this->alias = "CVTTSD2SI";
	return 0;
}

CCVTTSD2SI::CCVTTSD2SI()
{
	this->my_init();
}

CCVTTSD2SI::~CCVTTSD2SI()
{

}
