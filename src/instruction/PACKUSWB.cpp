#include "PACKUSWB.h"
int CPACKUSWB::my_init(void *p)
{
	this->name = "CPACKUSWB";
	this->alias = "PACKUSWB";
	return 0;
}

CPACKUSWB::CPACKUSWB()
{
	this->my_init();
}

CPACKUSWB::~CPACKUSWB()
{

}
