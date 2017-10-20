#include "MOVSW.h"
int CMOVSW::my_init(void *p)
{
	this->name = "CMOVSW";
	this->alias = "MOVSW";
	return 0;
}

CMOVSW::CMOVSW()
{
	this->my_init();
}

CMOVSW::~CMOVSW()
{

}
