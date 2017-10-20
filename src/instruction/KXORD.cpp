#include "KXORD.h"
int CKXORD::my_init(void *p)
{
	this->name = "CKXORD";
	this->alias = "KXORD";
	return 0;
}

CKXORD::CKXORD()
{
	this->my_init();
}

CKXORD::~CKXORD()
{

}
