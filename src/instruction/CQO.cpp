#include "CQO.h"
int CCQO::my_init(void *p)
{
	this->name = "CCQO";
	this->alias = "CQO";
	return 0;
}

CCQO::CCQO()
{
	this->my_init();
}

CCQO::~CCQO()
{

}
