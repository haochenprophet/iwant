#include "KSHIFTRW.h"
int CKSHIFTRW::my_init(void *p)
{
	this->name = "CKSHIFTRW";
	this->alias = "KSHIFTRW";
	return 0;
}

CKSHIFTRW::CKSHIFTRW()
{
	this->my_init();
}

CKSHIFTRW::~CKSHIFTRW()
{

}
