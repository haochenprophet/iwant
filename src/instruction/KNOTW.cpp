#include "KNOTW.h"
int CKNOTW::my_init(void *p)
{
	this->name = "CKNOTW";
	this->alias = "KNOTW";
	return 0;
}

CKNOTW::CKNOTW()
{
	this->my_init();
}

CKNOTW::~CKNOTW()
{

}
