#include "DEC.h"
int CDEC::my_init(void *p)
{
	this->name = "CDEC";
	this->alias = "DEC";
	return 0;
}

CDEC::CDEC()
{
	this->my_init();
}

CDEC::~CDEC()
{

}
