#include "VPMOVUSQW.h"
int CVPMOVUSQW::my_init(void *p)
{
	this->name = "CVPMOVUSQW";
	this->alias = "VPMOVUSQW";
	return 0;
}

CVPMOVUSQW::CVPMOVUSQW()
{
	this->my_init();
}

CVPMOVUSQW::~CVPMOVUSQW()
{

}
