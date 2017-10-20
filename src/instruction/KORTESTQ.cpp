#include "KORTESTQ.h"
int CKORTESTQ::my_init(void *p)
{
	this->name = "CKORTESTQ";
	this->alias = "KORTESTQ";
	return 0;
}

CKORTESTQ::CKORTESTQ()
{
	this->my_init();
}

CKORTESTQ::~CKORTESTQ()
{

}
