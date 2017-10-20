#include "INVPCID.h"
int CINVPCID::my_init(void *p)
{
	this->name = "CINVPCID";
	this->alias = "INVPCID";
	return 0;
}

CINVPCID::CINVPCID()
{
	this->my_init();
}

CINVPCID::~CINVPCID()
{

}
