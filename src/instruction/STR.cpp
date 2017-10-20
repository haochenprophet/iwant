#include "STR.h"
int CSTR::my_init(void *p)
{
	this->name = "CSTR";
	this->alias = "STR";
	return 0;
}

CSTR::CSTR()
{
	this->my_init();
}

CSTR::~CSTR()
{

}
