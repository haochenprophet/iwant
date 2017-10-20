#include "VPMOVQ2M.h"
int CVPMOVQ2M::my_init(void *p)
{
	this->name = "CVPMOVQ2M";
	this->alias = "VPMOVQ2M";
	return 0;
}

CVPMOVQ2M::CVPMOVQ2M()
{
	this->my_init();
}

CVPMOVQ2M::~CVPMOVQ2M()
{

}
