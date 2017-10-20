#include "FISUBR.h"
int CFISUBR::my_init(void *p)
{
	this->name = "CFISUBR";
	this->alias = "FISUBR";
	return 0;
}

CFISUBR::CFISUBR()
{
	this->my_init();
}

CFISUBR::~CFISUBR()
{

}
