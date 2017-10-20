#include "VPTESTNMW.h"
int CVPTESTNMW::my_init(void *p)
{
	this->name = "CVPTESTNMW";
	this->alias = "VPTESTNMW";
	return 0;
}

CVPTESTNMW::CVPTESTNMW()
{
	this->my_init();
}

CVPTESTNMW::~CVPTESTNMW()
{

}
