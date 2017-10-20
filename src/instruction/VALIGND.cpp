#include "VALIGND.h"
int CVALIGND::my_init(void *p)
{
	this->name = "CVALIGND";
	this->alias = "VALIGND";
	return 0;
}

CVALIGND::CVALIGND()
{
	this->my_init();
}

CVALIGND::~CVALIGND()
{

}
