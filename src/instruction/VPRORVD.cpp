#include "VPRORVD.h"
int CVPRORVD::my_init(void *p)
{
	this->name = "CVPRORVD";
	this->alias = "VPRORVD";
	return 0;
}

CVPRORVD::CVPRORVD()
{
	this->my_init();
}

CVPRORVD::~CVPRORVD()
{

}
