#include "LFS.h"
int CLFS::my_init(void *p)
{
	this->name = "CLFS";
	this->alias = "LFS";
	return 0;
}

CLFS::CLFS()
{
	this->my_init();
}

CLFS::~CLFS()
{

}
