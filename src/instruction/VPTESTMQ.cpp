#include "VPTESTMQ.h"
int CVPTESTMQ::my_init(void *p)
{
	this->name = "CVPTESTMQ";
	this->alias = "VPTESTMQ";
	return 0;
}

CVPTESTMQ::CVPTESTMQ()
{
	this->my_init();
}

CVPTESTMQ::~CVPTESTMQ()
{

}
