#include "VREDUCESS.h"
int CVREDUCESS::my_init(void *p)
{
	this->name = "CVREDUCESS";
	this->alias = "VREDUCESS";
	return 0;
}

CVREDUCESS::CVREDUCESS()
{
	this->my_init();
}

CVREDUCESS::~CVREDUCESS()
{

}
