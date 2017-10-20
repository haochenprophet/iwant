#include "VPRORVQ.h"
int CVPRORVQ::my_init(void *p)
{
	this->name = "CVPRORVQ";
	this->alias = "VPRORVQ";
	return 0;
}

CVPRORVQ::CVPRORVQ()
{
	this->my_init();
}

CVPRORVQ::~CVPRORVQ()
{

}
