#include "AESDECLAST.h"
int CAESDECLAST::my_init(void *p)
{
	this->name = "CAESDECLAST";
	this->alias = "AESDECLAST";
	return 0;
}

CAESDECLAST::CAESDECLAST()
{
	this->my_init();
}

CAESDECLAST::~CAESDECLAST()
{

}
