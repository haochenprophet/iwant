#include "VPTESTNMD.h"
int CVPTESTNMD::my_init(void *p)
{
	this->name = "CVPTESTNMD";
	this->alias = "VPTESTNMD";
	return 0;
}

CVPTESTNMD::CVPTESTNMD()
{
	this->my_init();
}

CVPTESTNMD::~CVPTESTNMD()
{

}
