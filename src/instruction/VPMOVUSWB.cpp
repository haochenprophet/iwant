#include "VPMOVUSWB.h"
int CVPMOVUSWB::my_init(void *p)
{
	this->name = "CVPMOVUSWB";
	this->alias = "VPMOVUSWB";
	return 0;
}

CVPMOVUSWB::CVPMOVUSWB()
{
	this->my_init();
}

CVPMOVUSWB::~CVPMOVUSWB()
{

}
