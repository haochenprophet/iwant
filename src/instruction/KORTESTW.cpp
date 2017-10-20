#include "KORTESTW.h"
int CKORTESTW::my_init(void *p)
{
	this->name = "CKORTESTW";
	this->alias = "KORTESTW";
	return 0;
}

CKORTESTW::CKORTESTW()
{
	this->my_init();
}

CKORTESTW::~CKORTESTW()
{

}
