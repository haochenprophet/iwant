#include "VPROLVQ.h"
int CVPROLVQ::my_init(void *p)
{
	this->name = "CVPROLVQ";
	this->alias = "VPROLVQ";
	return 0;
}

CVPROLVQ::CVPROLVQ()
{
	this->my_init();
}

CVPROLVQ::~CVPROLVQ()
{

}
