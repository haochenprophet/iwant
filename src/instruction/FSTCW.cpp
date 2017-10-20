#include "FSTCW.h"
int CFSTCW::my_init(void *p)
{
	this->name = "CFSTCW";
	this->alias = "FSTCW";
	return 0;
}

CFSTCW::CFSTCW()
{
	this->my_init();
}

CFSTCW::~CFSTCW()
{

}
