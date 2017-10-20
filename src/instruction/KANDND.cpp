#include "KANDND.h"
int CKANDND::my_init(void *p)
{
	this->name = "CKANDND";
	this->alias = "KANDND";
	return 0;
}

CKANDND::CKANDND()
{
	this->my_init();
}

CKANDND::~CKANDND()
{

}
