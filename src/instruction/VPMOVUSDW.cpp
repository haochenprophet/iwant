#include "VPMOVUSDW.h"
int CVPMOVUSDW::my_init(void *p)
{
	this->name = "CVPMOVUSDW";
	this->alias = "VPMOVUSDW";
	return 0;
}

CVPMOVUSDW::CVPMOVUSDW()
{
	this->my_init();
}

CVPMOVUSDW::~CVPMOVUSDW()
{

}
