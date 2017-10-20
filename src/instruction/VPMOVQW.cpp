#include "VPMOVQW.h"
int CVPMOVQW::my_init(void *p)
{
	this->name = "CVPMOVQW";
	this->alias = "VPMOVQW";
	return 0;
}

CVPMOVQW::CVPMOVQW()
{
	this->my_init();
}

CVPMOVQW::~CVPMOVQW()
{

}
