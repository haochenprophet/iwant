#include "VPLZCNTQ.h"
int CVPLZCNTQ::my_init(void *p)
{
	this->name = "CVPLZCNTQ";
	this->alias = "VPLZCNTQ";
	return 0;
}

CVPLZCNTQ::CVPLZCNTQ()
{
	this->my_init();
}

CVPLZCNTQ::~CVPLZCNTQ()
{

}
