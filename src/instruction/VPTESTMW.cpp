#include "VPTESTMW.h"
int CVPTESTMW::my_init(void *p)
{
	this->name = "CVPTESTMW";
	this->alias = "VPTESTMW";
	return 0;
}

CVPTESTMW::CVPTESTMW()
{
	this->my_init();
}

CVPTESTMW::~CVPTESTMW()
{

}
