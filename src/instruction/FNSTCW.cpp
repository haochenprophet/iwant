#include "FNSTCW.h"
int CFNSTCW::my_init(void *p)
{
	this->name = "CFNSTCW";
	this->alias = "FNSTCW";
	return 0;
}

CFNSTCW::CFNSTCW()
{
	this->my_init();
}

CFNSTCW::~CFNSTCW()
{

}
