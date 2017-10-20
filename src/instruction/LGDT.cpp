#include "LGDT.h"
int CLGDT::my_init(void *p)
{
	this->name = "CLGDT";
	this->alias = "LGDT";
	return 0;
}

CLGDT::CLGDT()
{
	this->my_init();
}

CLGDT::~CLGDT()
{

}
