#include "CVTTPD2PI.h"
int CCVTTPD2PI::my_init(void *p)
{
	this->name = "CCVTTPD2PI";
	this->alias = "CVTTPD2PI";
	return 0;
}

CCVTTPD2PI::CCVTTPD2PI()
{
	this->my_init();
}

CCVTTPD2PI::~CCVTTPD2PI()
{

}
