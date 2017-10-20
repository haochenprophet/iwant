#include "LODSB.h"
int CLODSB::my_init(void *p)
{
	this->name = "CLODSB";
	this->alias = "LODSB";
	return 0;
}

CLODSB::CLODSB()
{
	this->my_init();
}

CLODSB::~CLODSB()
{

}
