#include "VPMOVB2M.h"
int CVPMOVB2M::my_init(void *p)
{
	this->name = "CVPMOVB2M";
	this->alias = "VPMOVB2M";
	return 0;
}

CVPMOVB2M::CVPMOVB2M()
{
	this->my_init();
}

CVPMOVB2M::~CVPMOVB2M()
{

}
