#include "VPMOVSDW.h"
int CVPMOVSDW::my_init(void *p)
{
	this->name = "CVPMOVSDW";
	this->alias = "VPMOVSDW";
	return 0;
}

CVPMOVSDW::CVPMOVSDW()
{
	this->my_init();
}

CVPMOVSDW::~CVPMOVSDW()
{

}
