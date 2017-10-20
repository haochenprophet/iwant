#include "VPMOVDB.h"
int CVPMOVDB::my_init(void *p)
{
	this->name = "CVPMOVDB";
	this->alias = "VPMOVDB";
	return 0;
}

CVPMOVDB::CVPMOVDB()
{
	this->my_init();
}

CVPMOVDB::~CVPMOVDB()
{

}
