#include "VPTESTMB.h"
int CVPTESTMB::my_init(void *p)
{
	this->name = "CVPTESTMB";
	this->alias = "VPTESTMB";
	return 0;
}

CVPTESTMB::CVPTESTMB()
{
	this->my_init();
}

CVPTESTMB::~CVPTESTMB()
{

}
