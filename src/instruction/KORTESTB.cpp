#include "KORTESTB.h"
int CKORTESTB::my_init(void *p)
{
	this->name = "CKORTESTB";
	this->alias = "KORTESTB";
	return 0;
}

CKORTESTB::CKORTESTB()
{
	this->my_init();
}

CKORTESTB::~CKORTESTB()
{

}
