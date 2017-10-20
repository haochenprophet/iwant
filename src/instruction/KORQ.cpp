#include "KORQ.h"
int CKORQ::my_init(void *p)
{
	this->name = "CKORQ";
	this->alias = "KORQ";
	return 0;
}

CKORQ::CKORQ()
{
	this->my_init();
}

CKORQ::~CKORQ()
{

}
