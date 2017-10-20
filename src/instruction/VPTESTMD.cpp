#include "VPTESTMD.h"
int CVPTESTMD::my_init(void *p)
{
	this->name = "CVPTESTMD";
	this->alias = "VPTESTMD";
	return 0;
}

CVPTESTMD::CVPTESTMD()
{
	this->my_init();
}

CVPTESTMD::~CVPTESTMD()
{

}
