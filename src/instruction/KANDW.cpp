#include "KANDW.h"
int CKANDW::my_init(void *p)
{
	this->name = "CKANDW";
	this->alias = "KANDW";
	return 0;
}

CKANDW::CKANDW()
{
	this->my_init();
}

CKANDW::~CKANDW()
{

}
