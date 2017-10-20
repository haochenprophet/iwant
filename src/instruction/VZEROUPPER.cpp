#include "VZEROUPPER.h"
int CVZEROUPPER::my_init(void *p)
{
	this->name = "CVZEROUPPER";
	this->alias = "VZEROUPPER";
	return 0;
}

CVZEROUPPER::CVZEROUPPER()
{
	this->my_init();
}

CVZEROUPPER::~CVZEROUPPER()
{

}
