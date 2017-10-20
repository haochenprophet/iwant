#include "VPMOVQD.h"
int CVPMOVQD::my_init(void *p)
{
	this->name = "CVPMOVQD";
	this->alias = "VPMOVQD";
	return 0;
}

CVPMOVQD::CVPMOVQD()
{
	this->my_init();
}

CVPMOVQD::~CVPMOVQD()
{

}
