#include "VPMOVW2M.h"
int CVPMOVW2M::my_init(void *p)
{
	this->name = "CVPMOVW2M";
	this->alias = "VPMOVW2M";
	return 0;
}

CVPMOVW2M::CVPMOVW2M()
{
	this->my_init();
}

CVPMOVW2M::~CVPMOVW2M()
{

}
