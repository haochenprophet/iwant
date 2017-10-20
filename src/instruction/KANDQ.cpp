#include "KANDQ.h"
int CKANDQ::my_init(void *p)
{
	this->name = "CKANDQ";
	this->alias = "KANDQ";
	return 0;
}

CKANDQ::CKANDQ()
{
	this->my_init();
}

CKANDQ::~CKANDQ()
{

}
