#include "VPMOVDW.h"
int CVPMOVDW::my_init(void *p)
{
	this->name = "CVPMOVDW";
	this->alias = "VPMOVDW";
	return 0;
}

CVPMOVDW::CVPMOVDW()
{
	this->my_init();
}

CVPMOVDW::~CVPMOVDW()
{

}
