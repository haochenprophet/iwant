#include "KXORW.h"
int CKXORW::my_init(void *p)
{
	this->name = "CKXORW";
	this->alias = "KXORW";
	return 0;
}

CKXORW::CKXORW()
{
	this->my_init();
}

CKXORW::~CKXORW()
{

}
