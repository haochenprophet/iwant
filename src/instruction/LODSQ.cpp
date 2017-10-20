#include "LODSQ.h"
int CLODSQ::my_init(void *p)
{
	this->name = "CLODSQ";
	this->alias = "LODSQ";
	return 0;
}

CLODSQ::CLODSQ()
{
	this->my_init();
}

CLODSQ::~CLODSQ()
{

}
