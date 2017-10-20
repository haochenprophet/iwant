#include "VPMOVUSDB.h"
int CVPMOVUSDB::my_init(void *p)
{
	this->name = "CVPMOVUSDB";
	this->alias = "VPMOVUSDB";
	return 0;
}

CVPMOVUSDB::CVPMOVUSDB()
{
	this->my_init();
}

CVPMOVUSDB::~CVPMOVUSDB()
{

}
