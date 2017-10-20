#include "BLSMSK.h"
int CBLSMSK::my_init(void *p)
{
	this->name = "CBLSMSK";
	this->alias = "BLSMSK";
	return 0;
}

CBLSMSK::CBLSMSK()
{
	this->my_init();
}

CBLSMSK::~CBLSMSK()
{

}
