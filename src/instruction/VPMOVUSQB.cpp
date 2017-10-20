#include "VPMOVUSQB.h"
int CVPMOVUSQB::my_init(void *p)
{
	this->name = "CVPMOVUSQB";
	this->alias = "VPMOVUSQB";
	return 0;
}

CVPMOVUSQB::CVPMOVUSQB()
{
	this->my_init();
}

CVPMOVUSQB::~CVPMOVUSQB()
{

}
