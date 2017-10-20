#include "LODSW.h"
int CLODSW::my_init(void *p)
{
	this->name = "CLODSW";
	this->alias = "LODSW";
	return 0;
}

CLODSW::CLODSW()
{
	this->my_init();
}

CLODSW::~CLODSW()
{

}
