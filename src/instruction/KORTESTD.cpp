#include "KORTESTD.h"
int CKORTESTD::my_init(void *p)
{
	this->name = "CKORTESTD";
	this->alias = "KORTESTD";
	return 0;
}

CKORTESTD::CKORTESTD()
{
	this->my_init();
}

CKORTESTD::~CKORTESTD()
{

}
