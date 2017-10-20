#include "VPTESTNMB.h"
int CVPTESTNMB::my_init(void *p)
{
	this->name = "CVPTESTNMB";
	this->alias = "VPTESTNMB";
	return 0;
}

CVPTESTNMB::CVPTESTNMB()
{
	this->my_init();
}

CVPTESTNMB::~CVPTESTNMB()
{

}
