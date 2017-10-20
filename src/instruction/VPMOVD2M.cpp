#include "VPMOVD2M.h"
int CVPMOVD2M::my_init(void *p)
{
	this->name = "CVPMOVD2M";
	this->alias = "VPMOVD2M";
	return 0;
}

CVPMOVD2M::CVPMOVD2M()
{
	this->my_init();
}

CVPMOVD2M::~CVPMOVD2M()
{

}
