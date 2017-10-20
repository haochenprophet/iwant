#include "VPMOVQB.h"
int CVPMOVQB::my_init(void *p)
{
	this->name = "CVPMOVQB";
	this->alias = "VPMOVQB";
	return 0;
}

CVPMOVQB::CVPMOVQB()
{
	this->my_init();
}

CVPMOVQB::~CVPMOVQB()
{

}
