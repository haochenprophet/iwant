#include "VPLZCNTD.h"
int CVPLZCNTD::my_init(void *p)
{
	this->name = "CVPLZCNTD";
	this->alias = "VPLZCNTD";
	return 0;
}

CVPLZCNTD::CVPLZCNTD()
{
	this->my_init();
}

CVPLZCNTD::~CVPLZCNTD()
{

}
