#include "VPMOVUSQD.h"
int CVPMOVUSQD::my_init(void *p)
{
	this->name = "CVPMOVUSQD";
	this->alias = "VPMOVUSQD";
	return 0;
}

CVPMOVUSQD::CVPMOVUSQD()
{
	this->my_init();
}

CVPMOVUSQD::~CVPMOVUSQD()
{

}
