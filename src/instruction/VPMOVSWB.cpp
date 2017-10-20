#include "VPMOVSWB.h"
int CVPMOVSWB::my_init(void *p)
{
	this->name = "CVPMOVSWB";
	this->alias = "VPMOVSWB";
	return 0;
}

CVPMOVSWB::CVPMOVSWB()
{
	this->my_init();
}

CVPMOVSWB::~CVPMOVSWB()
{

}
