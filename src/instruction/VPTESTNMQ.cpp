#include "VPTESTNMQ.h"
int CVPTESTNMQ::my_init(void *p)
{
	this->name = "CVPTESTNMQ";
	this->alias = "VPTESTNMQ";
	return 0;
}

CVPTESTNMQ::CVPTESTNMQ()
{
	this->my_init();
}

CVPTESTNMQ::~CVPTESTNMQ()
{

}
