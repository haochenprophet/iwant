#include "BT.h"
int CBT::my_init(void *p)
{
	this->name = "CBT";
	this->alias = "BT";
	return 0;
}

CBT::CBT()
{
	this->my_init();
}

CBT::~CBT()
{

}
