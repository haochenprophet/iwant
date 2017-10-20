#include "ENTER.h"
int CENTER::my_init(void *p)
{
	this->name = "CENTER";
	this->alias = "ENTER";
	return 0;
}

CENTER::CENTER()
{
	this->my_init();
}

CENTER::~CENTER()
{

}
